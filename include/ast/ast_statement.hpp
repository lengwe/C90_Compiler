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
    Nodeptr statement_list;
		Nodeptr declaration_list;


  public:
    compound_statement(int type_in, Nodeptr _l,Nodeptr _r) : type(type_in), statement_list(_l),
		 	declaration_list(_r){}
    ~compound_statement(){
      delete statement_list;
      delete declaration_list;
    }

      virtual void python(std::string &dst) const override{
        //std::cerr<<"entering compound_statement\n";
        std::string g;
        for(int i=0; i<global.size();i++){
            g += "global "+global[i] + '\n';
        }

        std::string str1, str2;
        switch (type) {
          case 1:
            dst = g + "\n";
          break;

          case 2:
            statement_list->python(str1);
            dst = g + str1+"\n";
            //std::cout<<"str1 in case 2 in compound_statement: "<<str1<<'\n';
          break;

          case 3:
            declaration_list->python(str1);
            dst = g + str1+"\n";
            //std::cout<<"str1 in case 3 in compound_statement: "<<str1<<'\n';
          break;

          case 4:
            declaration_list->python(str1);
            statement_list->python(str2);
            dst = g + str1 +"\n" + str2 + "\n";
            //std::cout<<"str1: "<<str1<<'\n';
            //std::cout<<"str2: "<<str2<<'\n';
            //std::cout<<"dst in case 4 in compound_statement "<<dst<<'\n';
            break;
        }
        // if(declaration_list!=NULL){
        //   declaration_list->python(str1);
        // }
        // if(statement_list!=NULL){
        //   statement_list->python(str2);
        // }
        //
        // dst = str1 + "\n" + str2;
        // //std::cerr<<"str1 in func: "<<str1<<std::endl;
        // //std::cerr<<"str2 in func: "<<str2<<std::endl;
        // //std::cout<<"str3 in func: "<<str3<<std::endl;
      }
      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
        std::string str1,str2;
        switch (type) {
          // case 1:
          //   dst = g + "\n";
          // break;

          case 2:
            statement_list->mips(str1,destReg, Context);
                        std::cerr << "2" << '\n';
            // dst = g + str1+"\n";
            //std::cout<<"str1 in case 2 in compound_statement: "<<str1<<'\n';
          break;

          case 3:
            declaration_list->mips(str1,destReg, Context);
              std::cerr << "3" << '\n';
            // dst = g + str1+"\n";
            //std::cout<<"str1 in case 3 in compound_statement: "<<str1<<'\n';
          break;

          case 4:
            declaration_list->mips(str1,destReg, Context);
            statement_list->mips(str2,destReg, Context);
            std::cerr << "4" << '\n';
            // dst = g + str1 +"\n" + str2 + "\n";
            //std::cout<<"str1: "<<str1<<'\n';
            //std::cout<<"str2: "<<str2<<'\n';
            //std::cout<<"dst in case 4 in compound_statement "<<dst<<'\n';
            break;
        }
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
    int type;
    Nodeptr statementptr;

  public:
    statement(int type_in,  Nodeptr _l) : type(type_in), statementptr(_l){}
    ~statement(){
      delete statementptr;
    }

    virtual void python(std::string &dst) const override{
      //std::cerr<<"entering statement\n";
    }

    virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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
          dst = str+'\n'+str2;
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
          std::cout << "beq " << c << " $zero, " << end1 << std::endl;
          statement_1->mips(dst, destReg, Context);
          if(statement_2 != NULL){
            std::string end2 = makeName("end2");
            std::cout << "beq $zero, $zero, " << end2 << std::endl;
            std::cout << ":" << end1 << std::endl;
            statement_2->mips(dst, destReg, Context);
            std::cout << ":" << end2 << std::endl;
          }
          else{
            std::cout << ":" << end1 << std::endl;
          }
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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
