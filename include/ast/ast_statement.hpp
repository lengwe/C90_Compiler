#ifndef AST_DECLARE_HPP
#define AST_DECLARE_HPP
#include <string>
#include <iostream>
#include <vector>
#include <regex>
#include "node.hpp"

// class abstract_declarator : public Node{
//   private:
//     int type;
//     Nodeptr pointer;
// 		Nodeptr direct_abstract_declarator;
//
//
//   public:
//     abstract_declarator(int type_in, Nodeptr _l,Nodeptr _r) : type(type_in), pointer(_l),
// 		 	direct_abstract_declarator(_r){}
//
//       virtual void python(std::string &dst) const override{
//
//       }
// };

class compound_statement : public Node{
  private:
    int type;
    Nodeptr block_item_list;



  public:
    compound_statement(int type_in, Nodeptr _l) : type(type_in), block_item_list(_l){}
    ~compound_statement(){
      delete block_item_list;
    }

      virtual void python(std::string &dst) const override{
        //std::cerr<<"entering compound_statement\n";
            std::string str1;
            switch(type){
              case 1:
                dst = "pass";
              break;

              case 2:
              block_item_list->python(str1);
              dst = str1;
              break;
            }

      }

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
        if(type == 1){
          return;
        }

        std::string str1,str2;
        block_item_list->mips(dst,destReg, Context);
      }
};

class block_item_list : public Node{
  private:
    int type;
    Nodeptr block_item_listptr;
    Nodeptr block_item;

  public:
    block_item_list(int type_in, Nodeptr _l,Nodeptr _r) : type(type_in), block_item_listptr(_l),
    block_item(_r){}
    ~block_item_list(){
      delete block_item_listptr;
      delete block_item;
    }

      virtual void python(std::string &dst) const override{
        //std::cerr<<"entering compound_statement\n";
            std::string str1,str2;
            block_item_listptr->python(str1);
            block_item->python(str2);
            dst = str1 + '\n' + str2;

        }

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
        block_item_listptr->mips(dst,destReg, Context);
        block_item->mips(dst,destReg, Context);
        if(Context.to_print == true){
          std::cout << Context.str_to_print;
          Context.to_print = false;
        }
      }
};

class block_item : public Node{
  private:
    int type;
    Nodeptr block_itemptr;

  public:
    block_item(Nodeptr _l) : block_itemptr(_l){}
    ~block_item(){
      delete block_itemptr;
    }

      virtual void python(std::string &dst) const override{
        //std::cerr<<"entering compound_statement\n";
            block_itemptr->python(dst);
        }

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
        block_itemptr->mips(dst,destReg, Context);
        // std::cout  << '\n';
      }
};
// class type_qualifier : public Node{
//   private:
//     int type;
//     std::string* keyword;
//
//
//
//   public:
//     type_qualifier(int type_in,  std::string* _l) : type(type_in), keyword(_l){}
//
// };



class jump_statement : public Node{
  private:
    int type;
		std::string* keyword;
		std::string* id;
		Nodeptr expression;


  public:
    jump_statement(int type_in,  std::string* _keyword, std::string* _id, Nodeptr _l) : type(type_in), keyword(_keyword),
		 	id(_id), expression(_l){}

    ~jump_statement(){
      delete expression;
    }

      virtual void python(std::string &dst) const override{
        std::string str;
        //std::cerr<<"entering jump_statement\n";
        switch(type){
          case 1:
          case 2:
          case 3:
          break;

          case 4:
            dst = "return\n";
          break;

          case 5:
            expression->python(str);
            dst = "return " + str + "\n";
          break;
        }
      }

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
        std::string str;
        if(type==2){
          //continue statement
std::cout << "j " << Context.scope_start << '\n';
        }
        if(type==3){
          //break statement
std::cout << "j " << Context.scope_end << '\n';
        }
        if(type == 4 || type == 5){
          if(expression != NULL){
            expression -> mips(str, destReg, Context);
            std::cout << "addu " << destReg <<", $zero, " << str << '\n';
          }
          std::cout << "j " << Context.getScope()+"_end" << '\n';
        }
      }
};

class statement : public Node{
  private:
    Nodeptr statementptr;

  public:
    statement( Nodeptr _l) :statementptr(_l){}
    ~statement(){
      delete statementptr;
    }

    virtual void python(std::string &dst) const override{
    statementptr->python(dst);
    }

    virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
      statementptr->mips(dst, destReg, Context);
      if(Context.to_print == true){
        std::cout << Context.str_to_print;
        Context.to_print =false;
      }
    }
};

class statement_list : public Node{
  private:
    int type;
    Nodeptr statement;
		Nodeptr statement_listptr;


  public:
    statement_list(int type_in,  Nodeptr _l,Nodeptr _r) : type(type_in), statement(_l),
		 	statement_listptr(_r){}
    ~statement_list(){
      delete statement;
      delete statement_listptr;
    }

      virtual void python(std::string &dst) const override{
        std::string str, str2;
        //std::cerr<<"entering statement_list\n";
        if(statement_listptr==NULL){
          statement->python(str);
          dst = str;
        }
        else{
          statement_listptr->python(str);
          statement->python(str2);
          dst = str+'\n'+str2;
          //std::cerr<<"str in statement_list: "<<str<<'\n';
          //std::cerr<<"str2 in statement_list: "<<str2<<'\n';
        }
      }

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
        std::string str, str2;
        if(statement_listptr==NULL){
          statement->mips(str, destReg, Context);
          dst = str;
        }
        else{
          statement_listptr->mips(str, destReg, Context);
          statement->mips(str2, destReg, Context);

          //std::cerr<<"str in statement_list: "<<str<<'\n';
          //std::cerr<<"str2 in statement_list: "<<str2<<'\n';
        }
      }
};

class expression_statement : public Node{
  private:
    Nodeptr expression;


  public:
    expression_statement(Nodeptr _l) : expression(_l){}
    ~expression_statement(){
      delete expression;
    }

    virtual void python(std::string &dst) const override{
      std::string str;
      expression->python(str);
      dst = str;
    }

    virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
      if(expression != NULL){
        expression -> mips(dst,destReg, Context);
      }
      std::cout  << '\n';
    }
};

class selection_statement : public Node{
  private:
    int type;
    Nodeptr expression;
		Nodeptr statement_1;
		Nodeptr statement_2;

  public:
    selection_statement(int type_in,  Nodeptr _l, Nodeptr _r, Nodeptr _s) : type(type_in), expression(_l),
		 	statement_1(_r), statement_2(_s){}

    ~selection_statement(){
      delete expression;
      delete statement_1;
      delete statement_2;
    }


      virtual void python(std::string &dst) const override{
        //std::cerr<<"entering selection_statement\n";
        std::string name, str1, str2,str3; // str1=exp str2 = if str3 = else
        if(type == 1 || type == 2){
          name = "if ";
        }
        expression->python(str1);
        statement_1->python(str2);
        indent(str2);
        if(statement_2 != NULL){
          statement_2->python(str3);
          indent(str3);
          dst = name + str1 + ":" + '\n' + str2 + "\nelse:\n" + str3;
          return;
        }
        dst = name +  str1 + ":" + '\n' +str2;
      }

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
        if(type == 1 || type == 2){
          std::string c = Context.newVar(makeName("condition"),dst);
          std::string end1 = makeName("end1");
          expression-> mips(dst ,c, Context);
          std::cout << "beq " << c << ", $zero, " << end1 << std::endl;
          statement_1->mips(dst, destReg, Context);
          if(statement_2 != NULL){
            std::string end2 = makeName("end2");
            std::cout << "beq $zero, $zero, " << end2 << std::endl;
            std::cout <<  end1 <<":" << std::endl;
            statement_2->mips(dst, destReg, Context);
            std::cout  << end2 << ":" <<std::endl;
          }
          else{
            std::cout << end1  << ":"<< std::endl;
          }
        }
        if(type==3){

        }
      }
};

class iteration_statement : public Node{
  private:
    int type;
    Nodeptr expression;
		Nodeptr statement;
		Nodeptr expression_statement_1;
		Nodeptr expression_statement_2;

  public:
    iteration_statement(int type_in, Nodeptr _l, Nodeptr _r, Nodeptr _p, Nodeptr _q) : type(type_in), expression(_l),
		 	statement(_r), expression_statement_1(_p),expression_statement_2(_q){}

    ~iteration_statement(){
      delete expression;
      delete statement;
      delete expression_statement_1;
      delete expression_statement_2;
    }

      virtual void python(std::string &dst) const override{
        //std::cerr<<"entering iteration_statement\n";
        std::string name, str1, str2;
        if(type == 1){
          name = "while ";
        }
        expression->python(str1);
        statement->python(str2);
        indent(str2);
        dst = name+str1+":\n"+str2;
      }

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
        if(type == 1){
          std::string start = makeName("start");
          Context.scope_start = start;
          std::string exit = makeName("exit");
          Context.scope_end = exit;
          std::string str = start+","+exit;
          std::string condition = Context.newVar(makeName("condition"),dst);
          std::cout << start << ":" << std::endl;
          expression->mips(dst, condition, Context);
          std::cout << "beq " << condition << ", $zero, " << exit << std::endl;
          statement->mips(str, destReg, Context);
          if(Context.to_print == true){
            std::cout << Context.str_to_print;
            Context.to_print =false;
          }
          std::cout << "beq $zero, $zero, " << start <<  std::endl;
          std::cout << exit << ":" << std::endl;
        }
        if(type == 3||type == 4){
          expression_statement_1->mips(dst, destReg,Context);
          std::string start = makeName("start");
          Context.scope_start = start;
          std::string exit = makeName("exit");
          Context.scope_end = exit;
          std::string str = start+","+exit;
          std::string condition = Context.newVar(makeName("condition"),dst);
          std::cout << start << ":" << std::endl;
          expression_statement_2->mips(dst, condition, Context);
          if(Context.to_print == true){
            std::cout << Context.str_to_print;
            Context.to_print =false;
          }
          std::cout << "beq " << condition << ", $zero, " << exit << std::endl;
          if(expression != NULL){
            expression->mips(str, destReg, Context);
          }
          statement->mips(str, destReg, Context);
          std::cout << "beq $zero, $zero, " << start <<  std::endl;
          std::cout << exit << ":" << std::endl;
        }
      }
};

class labeled_statement : public Node{
  private:
    int type;
    std::string* id;
		std::string* keyword;
		Nodeptr constant_expression;
		Nodeptr statement;

  public:
    labeled_statement(int type_in,  std::string* _id,std::string* _keyword, Nodeptr _l, Nodeptr _r) : type(type_in), id(_id),
		 	keyword(_keyword), constant_expression(_l), statement(_r){}

    ~labeled_statement(){
      delete constant_expression;
      delete statement;
    }

      virtual void python(std::string &dst) const override{
        //std::cerr<<"entering labeled_statement\n";
  		}

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
};



#endif
