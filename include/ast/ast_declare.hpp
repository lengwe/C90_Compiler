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
};

class declaration_list : public Node{
  private:
    int type;
    Nodeptr declaration;
		Nodeptr declaration_listptr;


  public:
    declaration_list(int type_in,  Nodeptr _l,Nodeptr _r) : type(type_in), declaration(_l),
		 	declaration_listptr(_r){}
    ~declaration_list(){
      delete declaration;
      delete declaration_listptr;
    }

      virtual void python(std::string &dst) const override{
        //std::cerr << "enter declaration_list" << '\n';
          std::string str, str2;
          // declaration->python(str);
          // if(declaration_listptr != NULL){
          //   declaration_listptr->python(str2);
          // }
          if(declaration_listptr!=NULL){
            declaration_listptr->python(str);
            declaration->python(str2);
            dst = str + "\n" + str2;
          }
          else{
            declaration->python(str);
            dst = str;
          }
          //dst = str+","+str2;
      }
};

class declarator : public Node{
  private:
    int type;
    Nodeptr pointer;
		Nodeptr direct_declarator;


  public:
    declarator(int type_in,  Nodeptr _l,Nodeptr _r) : type(type_in), pointer(_l),
		 	direct_declarator(_r){}
    ~declarator(){
      delete pointer;
      delete direct_declarator;
    }

      virtual void python(std::string &dst) const override{
        //std::cerr<<"entering declarator\n";

      }
};

class declaration : public Node{
  private:
    int type;
    Nodeptr declaration_specifiers;
		Nodeptr init_declarator_list;


  public:
    declaration(int type_in,  Nodeptr _l,Nodeptr _r) : type(type_in), declaration_specifiers(_l),
		 	init_declarator_list(_r){}
    ~declaration(){
      delete declaration_specifiers;
      delete init_declarator_list;
    }

      virtual void python(std::string &dst) const override{
        //std::cerr << "declaration" << '\n';
        std::string str1, str2;
        declaration_specifiers->python(str1);
        init_declarator_list -> python(str2);
        //std::cerr << "str1 in declaration "<<str1 << '\n';
        //std::cerr << "str2 in declaration "<<str2 << '\n';
        dst = str1+str2;
      }
};

class initializer : public Node{
  private:
    int type;
    Nodeptr assignment_expression;
		Nodeptr initializer_list;


  public:
    initializer(int type_in,  Nodeptr _l,Nodeptr _r) : type(type_in), assignment_expression(_l),
		 	initializer_list(_r){}
    ~initializer(){
      delete assignment_expression;
      delete initializer_list;
    }

      virtual void python(std::string &dst) const override{
        //std::cerr<<"entering initializer\n";
      }
};

class struct_declaration_list : public Node{
  private:
    int type;
    Nodeptr struct_declarator;
		Nodeptr struct_declarator_list;


  public:
    struct_declaration_list(int type_in,  Nodeptr _l,Nodeptr _r) : type(type_in), struct_declarator(_l),
		 	struct_declarator_list(_r){}

      virtual void python(std::string &dst) const override{
          //std::cerr<<"entering struct_declaration_list\n";
      }
};

class struct_declaration : public Node{
  private:
    int type;
    Nodeptr specifier_qualifier_list;
		Nodeptr struct_declarator_list;


  public:
    struct_declaration(int type_in,  Nodeptr _l,Nodeptr _r) : type(type_in), specifier_qualifier_list(_l),
		 	struct_declarator_list(_r){}

      virtual void python(std::string &dst) const override{
            //std::cerr<<"entering struct_declaration\n";
      }
};

class struct_or_union : public Node{
  private:
    int type;
    std::string* keyword;

  public:
    struct_or_union(int type_in,  std::string* _l) : type(type_in), keyword(_l){}

    virtual void python(std::string &dst) const override{
      //not implement
    }
};

class type_name : public Node{
  private:
    int type;
    Nodeptr specifier_qualifier_list;
		Nodeptr abstract_declarator;


  public:
    type_name(int type_in,  Nodeptr _l,Nodeptr _r) : type(type_in), specifier_qualifier_list(_l),
		 	abstract_declarator(_r){}
    ~type_name(){
      delete specifier_qualifier_list;
      delete abstract_declarator;
    }

      virtual void python(std::string &dst) const override{
          //std::cerr<<"entering struct_or_union\n";
  		}
};

class specifier_qualifier_list : public Node{
  private:
    int type;
    Nodeptr type_specifier;
		Nodeptr specifier_qualifier_listptr;
		Nodeptr type_qualifier;

  public:
    specifier_qualifier_list(int type_in,  Nodeptr _l, Nodeptr _r, Nodeptr _s) : type(type_in), type_specifier(_l),
		 	specifier_qualifier_listptr(_r), type_qualifier(_s){}
    ~specifier_qualifier_list(){
      delete type_specifier;
      delete specifier_qualifier_listptr;
      delete type_qualifier;
    }

      virtual void python(std::string &dst) const override{
			//std::cerr<<"entering specifier_qualifier_list\n";
  		}
};

class struct_declarator_list : public Node{
  private:
    int type;
    Nodeptr struct_declarator;
		Nodeptr struct_declarator_listptr;


  public:
    struct_declarator_list(int type_in,  Nodeptr _l,Nodeptr _r) : type(type_in), struct_declarator(_l),
		 	struct_declarator_listptr(_r){}
    ~struct_declarator_list(){
      delete struct_declarator;
      delete struct_declarator_listptr;
    }

      virtual void python(std::string &dst) const override{
          //std::cerr<<"entering struct_declarator_list\n";
  		}
};



class enum_specifier : public Node{
  private:
    int type;
    std::string* num;
		std::string* identifier;
		Nodeptr enumerator_list;

  public:
    enum_specifier(int type_in,  std::string* _l,std::string* _r, Nodeptr _s) : type(type_in), num(_l),
		 	identifier(_r), enumerator_list(_s){}
    ~enum_specifier(){
      delete enumerator_list;
    }

      virtual void python(std::string &dst) const override{
          //std::cerr<<"entering enum_specifier\n";
      }
};

class enumerator_list : public Node{
  private:
    int type;
    Nodeptr enumerator;
		Nodeptr enumerator_listptr;


  public:
    enumerator_list(int type_in,  Nodeptr _l,Nodeptr _r) : type(type_in), enumerator(_l),
		 	enumerator_listptr(_r){}
    ~enumerator_list(){
      delete enumerator;
      delete enumerator_listptr;
    }

      virtual void python(std::string &dst) const override{
          //std::cerr<<"entering enumerator_list\n";
      }
};

class enumerator : public Node{
  private:
    int type;
    std::string* IDENTIFIER;
		Nodeptr constant_expression;


  public:
    enumerator(int type_in,  std::string* _l, Nodeptr _r) : type(type_in), IDENTIFIER(_l),
		constant_expression(_r){}

    ~enumerator(){
      delete constant_expression;
    }

    virtual void python(std::string &dst) const override{
        //std::cerr<<"entering enumerator\n";
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

class identifier_list : public Node{
  private:
    int type;
    std::string* IDENTIFIER;
		Nodeptr identifier_listptr;


  public:
    identifier_list(int type_in,  std::string* _l, Nodeptr _r) : type(type_in), IDENTIFIER(_l),
		identifier_listptr(_r){}

    ~identifier_list(){
      delete identifier_listptr;
    }

    virtual void python(std::string &dst) const override{
        //std::cerr<<"entering identifier_list\n";
      std::string str;
      switch (type) {
        case 1:
          dst = *IDENTIFIER;
        break;

        case 2:
          identifier_listptr->python(str);
          dst = str + "," + (*IDENTIFIER);
        break;
      }
    }
};

class direct_declarator : public Node{
  private:
    int type;
		std::string* identifier;
		Nodeptr direct_declaratorptr;
    Nodeptr declarator;
		Nodeptr constant_expression;
		Nodeptr parameter_type_list;
		//Nodeptr identifier_list;

  public:
    direct_declarator(int type_in,std::string* _id ,Nodeptr _l, Nodeptr _r, Nodeptr _p, Nodeptr _q) : type(type_in), identifier(_id), direct_declaratorptr(_l),
		 	declarator(_r), constant_expression(_p),parameter_type_list(_q){}
    ~direct_declarator(){
      delete direct_declaratorptr;
      delete declarator;
      delete constant_expression;
      delete parameter_type_list;
    }

      virtual void python(std::string &dst) const override{
        //std::cerr<<"entering direct_declarator\n";
        std::string str1, str2;
        switch (type) {
          case 1:
            dst = *identifier;
            //std::cerr<<"case 1 in direct_declarator: "<<dst<<std::endl;
          break;

          case 2:
            declarator->python(str1);
            dst = "(" + str1 +")";
            //std::cerr<<"case 2 in direct_declarator: "<<dst<<std::endl;
          break;

          case 3:
          case 4:
          break;

          case 5:
            //std::cerr<<"case 5 in direct_declarator\n";
            direct_declaratorptr->python(str1);
            parameter_type_list->python(str2);
            dst = str1 + "(" + str2 + ")";
          break;

          case 6:
            direct_declaratorptr->python(str1);
            dst = str1 + "()";
            //std::cerr<<"case 6 in direct_declarator: "<<dst<<'\n';
          break;
        }
      }
};

class parameter_list : public Node{
  private:
    int type;
    Nodeptr parameter_declaration;
		Nodeptr parameter_listptr;


  public:
    parameter_list(int type_in,  Nodeptr _l,Nodeptr _r) : type(type_in), parameter_declaration(_l),
		 	parameter_listptr(_r){}

    ~parameter_list(){
      delete parameter_declaration;
      delete parameter_listptr;
    }

      virtual void python(std::string &dst) const override{
        //std::cerr<<"entering parameter_list\n";
        std::string str1, str2 = "";
        parameter_declaration->python(str1);
        if(parameter_listptr == NULL){
          dst = str1;
          return;
        }
        parameter_listptr->python(str2);
        dst = str2+ ", " + str1;
      }
};

class parameter_type_list : public Node{
  private:
    int type;
    Nodeptr parameter_list;
		std::string* ellipsis;

  public:
    parameter_type_list(int type_in,  Nodeptr _l,std::string* _r) : type(type_in), parameter_list(_l),
		 	ellipsis(_r){}
    ~parameter_type_list(){
      delete parameter_list;
    }

      virtual void python(std::string &dst) const override{
        std::string str;
        if(ellipsis == NULL){
           parameter_list->python(str);
          dst = str;
        }
      }
};

class parameter_declaration : public Node{
  private:
    int type;
    Nodeptr declaration_specifiers;
		Nodeptr declarator;
		Nodeptr abstract_declarator;

  public:
    parameter_declaration(int type_in,  Nodeptr _l, Nodeptr _r, Nodeptr _s) : type(type_in), declaration_specifiers(_l),
		 	declarator(_r), abstract_declarator(_s){}
    ~parameter_declaration(){
      delete declaration_specifiers;
      delete declarator;
      delete abstract_declarator;
    }

      virtual void python(std::string &dst) const override{
          //std::cerr<<" entering parameter_declaration\n";
          std::string str1, str2;
          declarator->python(str1);
          declaration_specifiers->python(str2);
          dst = str1 + str2;
      }
};

class type_qualifier_list : public Node{
  private:
    int type;
    Nodeptr type_qualifier;
		Nodeptr type_qualifier_listptr;


  public:
    type_qualifier_list(int type_in,  Nodeptr _l,Nodeptr _r) : type(type_in), type_qualifier(_l),
		 	type_qualifier_listptr(_r){}

    ~type_qualifier_list(){
      delete type_qualifier;
      delete type_qualifier_listptr;
    }

      virtual void python(std::string &dst) const override{
                //std::cerr<<"entering type_qualifier_list\n";
      }
};



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
};

class initializer_list : public Node{
  private:
    int type;
    Nodeptr initializer;
		Nodeptr initializer_listptr;


  public:
    initializer_list(int type_in,  Nodeptr _l,Nodeptr _r) : type(type_in), initializer(_l),
		 	initializer_listptr(_r){}

    ~initializer_list(){
      delete initializer;
      delete initializer_listptr;
    }

      virtual void python(std::string &dst) const override{
        //std::cerr<<"entering initializer_list\n";
  		}
};

class struct_declarator : public Node{
  private:
    int type;
    Nodeptr declarator;
		Nodeptr constant_expression;

  public:
    struct_declarator(int type_in,  Nodeptr _l,Nodeptr _r) : type(type_in), declarator(_l),
		 	constant_expression(_r){}

    ~struct_declarator(){
      delete declarator;
      delete constant_expression;
    }

      virtual void python(std::string &dst) const override{
        //std::cerr<<"entering struct_declarator\n";
  		}
};


class storage_class_specifier : public Node{
  private:
    std::string* name;

  public:
    storage_class_specifier(std::string* in) : name(in){}

    virtual void python(std::string &dst) const override{
      //not implement
    }
};

#endif
