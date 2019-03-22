#ifndef AST_DECLARATION_HPP
#define AST_DECLARATION_HPP

#include <string>
#include <iostream>
#include "node.hpp"

class declaration_specifiers : public Node{
  private:
    int type;
    Nodeptr _declaration_specifiers;
    Nodeptr declarator;
    Nodeptr s;

  public:

    declaration_specifiers(int type_in, Nodeptr _l, Nodeptr _s, Nodeptr _r) : type(type_in), _declaration_specifiers(_l), declarator(_r), s(_s){}
      ~declaration_specifiers(){
        delete _declaration_specifiers;
        delete declarator;
        delete s;
      }

      virtual void python(std::string &dst) const override{
        //std::cerr<<" entering declaration_specifiers\n";
        std::string str1, str2;
        _declaration_specifiers->python(str1);
        if(declarator != NULL){
        declarator->python(str2);
        }
      }

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}

};

class init_declarator_list : public Node{
  private:
    Nodeptr l;
    Nodeptr r;
  public:
    init_declarator_list(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}
    ~init_declarator_list(){
      delete l;
      delete r;
    }

    virtual void python(std::string &dst) const override{
      //std::cerr<<" entering init_declarator_list\n";
      std::string str1, str2;
      l->python(str1);
      r->python(str2);
      dst = str1 + "\n" + str2;
    }

    virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}


};

class init_declarator : public Node{
  private:
    Nodeptr declarator;
    Nodeptr initializer;

  public:
    init_declarator(Nodeptr _l, Nodeptr _r) : declarator(_l), initializer(_r){}
    ~init_declarator(){
      delete declarator;
      delete initializer;
    }

    virtual void python(std::string &dst) const override{
      //std::cerr<<" entering init_declarator\n";
      std::string str1,str2;
      declarator->python(str1);
      if(initializer == NULL){
        dst = str1 + "=0";
        //std::cerr <<"init "<< dst << '\n';
        return;
      }
      initializer->python(str2);
      dst = str1 + "=" + str2;
    }

    // virtual void mips(std::string &dst) const override{
    //   std::string str, str2;
    //   declarator->mips(str);
    //   str = Context.makeVar(str);
    //   if(initializer == NULL){
    //       std::cout << "/* message */" << '\n';
    //     return ;
    //   }
    //   initializer->mips(str);
    // }

    virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
      std::string str1,str2;
      declarator->mips(str1, destReg, Context);
      if(initializer == NULL){
      std::cout << "addiu " << str1<< ", $zero, $zero" << '\n';
        return;
      }
      initializer->mips(str2, str1, Context);
      std::cerr << "str2 in init_declarator" << str2 <<  '\n';
      if(str2[0] != '$'){
        std::cout << "addiu " << str1 << ", $zero, " << str2 << '\n';
      }
    }
};

class type_specifier: public Node{
	private:
		int type;
	public:
		type_specifier(int type_in) : type(type_in) {}
		//~type_specifier(){delete type;}
		// virtual void print(std::ostream &dst) const /*override*/{
		// 	dst << type;
		// }

		//code-gen python
		virtual void python(std::string &dst) const override{
      //do nothing
      //std::cerr<<"entering type_specifier"<<std::endl;
		}

    virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
};

class struct_or_union_specifier : public Node {
  private:
    int type;
    Nodeptr struct_or_union;
    std::string* id;
    Nodeptr struct_declarator_list;
  public:
    struct_or_union_specifier(int _type, Nodeptr _s, std::string* _id, Nodeptr _l): type(_type),
      struct_or_union(_s), id(_id), struct_declarator_list(_l){}

      virtual void python(std::string &dst) const override{

      }

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
};

// class direct_abstract_declarator : public Node {
//
// 	private:
//     int type;
// 		Nodeptr abstract_declarator;
// 		Nodeptr constant_expression;
// 		Nodeptr parameter_type_list;
// 		Nodeptr _direct_abstract_declarator;
//
// 	public:
//
// 		direct_abstract_declarator(int _type, Nodeptr _abstract_declarator , Nodeptr _constant_expression , Nodeptr _parameter_type_list , Nodeptr _direct_abstract_declarator) :
// 					type(_type), abstract_declarator(_abstract_declarator), constant_expression(_constant_expression), parameter_type_list(_parameter_type_list), _direct_abstract_declarator(_direct_abstract_declarator) {}
//
// 		~direct_abstract_declarator() {}
//
//     virtual void python(std::string &dst) const override{
//
//     }
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

    virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{

        switch (type) {
          case 1:
          if(dst == "func"){
            dst = *identifier;
            return;
          }
            dst = Context.newVar(*identifier, destReg);
          break;
          case 6:
          std::string str("func");
            direct_declaratorptr->mips(str, destReg, Context);
            dst = str;
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
};

class storage_class_specifier : public Node{
  private:
    std::string* name;

  public:
    storage_class_specifier(std::string* in) : name(in){}

    virtual void python(std::string &dst) const override{
      //not implement
    }

    virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
        std::string str1;
        init_declarator_list -> mips(str1, destReg, Context);
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
        std::string str, str2;

        if(declaration_listptr!=NULL){
          declaration_listptr->mips(str, destReg, Context);
          declaration->mips(str2, destReg, Context);
        }
        else{
          declaration->mips(str, destReg, Context);
        }
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{

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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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

    virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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

      virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
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

    virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
};


#endif
