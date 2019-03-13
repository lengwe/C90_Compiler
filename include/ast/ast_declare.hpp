#ifndef AST_DECLARE_HPP
#define AST_DECLARE_HPP
#include <string>
#include <iostream>
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

      virtual void python(std::string &dst) const override{
        std::string str1, str2;
        switch (type) {
          case 1:
            dst = ":";
          break;

          case 2:
            statement_list->python(str1);
            indent(str1);
            dst = ":\n" + str1;
          break;

          case 3:
            declaration_list->python(str1);
            indent(str1);
            dst = ":\n" + str1;
          break;

          case 4:
            statement_list->python(str1);
            declaration_list->python(str2);
            indent(str1);
            indent(str2);
            dst = ":\n" + str1 + str2;
            break;
        }
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

      virtual void python(std::string &dst) const override{
          std::string str;
          declaration->python(str);
          dst = str;
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

      virtual void python(std::string &dst) const override{
        std::cerr<<"entering declarator\n";
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

      virtual void python(std::string &dst) const override{
        std::cerr << "declaration" << '\n';
        std::string str1, str2;
        declaration_specifiers->python(str1);
        init_declarator_list -> python(str2);
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

      virtual void python(std::string &dst) const override{
        std::cerr<<"entering initializer_list\n";
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
          std::cerr<<"entering initializer_list\n";
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
            std::cerr<<"entering initializer_list\n";
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

      virtual void python(std::string &dst) const override{
          std::cerr<<"entering initializer_list\n";
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

      virtual void python(std::string &dst) const override{
			std::cerr<<"entering specifier_qualifier_list\n";
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

      virtual void python(std::string &dst) const override{
          std::cerr<<"entering initializer_list\n";
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

      virtual void python(std::string &dst) const override{
          std::cerr<<"entering initializer_list\n";
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

      virtual void python(std::string &dst) const override{
          std::cerr<<"entering initializer_list\n";
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

    virtual void python(std::string &dst) const override{
        std::cerr<<"entering initializer_list\n";
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

    virtual void python(std::string &dst) const override{
        std::cerr<<"entering identifier_list\n";
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

      virtual void python(std::string &dst) const override{
        std::cerr<<"entering direct_declarator\n";
        std::string str1, str2;
        switch (type) {
          case 1:
            dst = *identifier;
            std::cout<<"case 1 in direct_declarator: "<<dst<<std::endl;
          break;

          case 2:
            declarator->python(str1);
            dst = "(" + str1 +")";
            std::cout<<"case 2 in direct_declarator: "<<dst<<std::endl;
          break;

          case 3:
          case 4:
          break;

          case 5:
            std::cout<<"case 5 in direct_declarator\n";
            direct_declaratorptr->python(str1);
            parameter_type_list->python(str2);
            dst = str1 + "(" + str2 + ")";
          break;

          case 6:
            std::cout<<"case 5 in direct_declarator\n";
            direct_declaratorptr->python(str1);
            dst = str1 + "()";
            std::cout<<"case 5 in direct_declarator: "<<dst<<'\n';
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

      virtual void python(std::string &dst) const override{
        std::cerr<<"entering parameter_list\n";
      }
};

// class parameter_type_list : public Node{
//   private:
//     int type;
//     Nodeptr parameter_list;
// 		std::string* ellipsis;
//
//
//   public:
//     parameter_type_list(int type_in,  Nodeptr _l,std::string* _r) : type(type_in), parameter_list(_l),
// 		 	ellipsis(_r){}
//
//       virtual void python(std::string &dst) const override{
//
//       }
// };

class parameter_declaration : public Node{
  private:
    int type;
    Nodeptr declaration_specifiers;
		Nodeptr declarator;
		Nodeptr abstract_declarator;

  public:
    parameter_declaration(int type_in,  Nodeptr _l, Nodeptr _r, Nodeptr _s) : type(type_in), declaration_specifiers(_l),
		 	declarator(_r), abstract_declarator(_s){}

      virtual void python(std::string &dst) const override{
          std::cerr<<" entering parameter_declaration\n";
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

      virtual void python(std::string &dst) const override{
                std::cerr<<"entering type_qualifier_list\n";
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

      virtual void python(std::string &dst) const override{
                        std::cerr<<"entering jump_statement\n";
      }
};

class statement : public Node{
  private:
    int type;
    Nodeptr statementptr;

  public:
    statement(int type_in,  Nodeptr _l) : type(type_in), statementptr(_l){}

    virtual void python(std::string &dst) const override{
      std::cerr<<"entering statement\n";
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

      virtual void python(std::string &dst) const override{
      std::cerr<<"entering statement_list\n";
      }
};

class expression_statement : public Node{
  private:
    Nodeptr expression;


  public:
    expression_statement(Nodeptr _l) : expression(_l){}

    virtual void python(std::string &dst) const override{
      std::cerr<<"entering statement_list\n";
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

      virtual void python(std::string &dst) const override{
        std::cerr<<"entering statement_list\n";
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

      virtual void python(std::string &dst) const override{
        std::cerr<<"entering statement_list\n";
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

      virtual void python(std::string &dst) const override{
        std::cerr<<"entering statement_list\n";
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

      virtual void python(std::string &dst) const override{
        std::cerr<<"entering statement_list\n";
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

      virtual void python(std::string &dst) const override{
        std::cerr<<"entering statement_list\n";
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
