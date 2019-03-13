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

    virtual void python(std::string &dst) const override{
      std::cerr<<" entering declaration_specifiers\n";
      std::string str1, str2;
      _declaration_specifiers->python(str1);
      if(declarator != NULL){
      declarator->python(str2);
      }
    }

};

class init_declarator_list : public Node{
  private:
    Nodeptr l;
    Nodeptr r;
  public:
    init_declarator_list(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}

    virtual void python(std::string &dst) const override{
      std::cerr<<" entering init_declarator_list\n";
    }

};

class init_declarator : public Node{
  private:
    Nodeptr declarator;
    Nodeptr initializer;

  public:
    init_declarator(Nodeptr _l, Nodeptr _r) : declarator(_l), initializer(_r){}

    virtual void python(std::string &dst) const override{
      std::string str1,str2;
      declarator->python(str1);
      if(initializer == NULL){
        dst = str1 + "=0";
        std::cerr <<"init"<< dst << '\n';
        return;
      }
      initializer->python(str2);
      dst = str1 + "=" + str2;
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
		//this function only checks the tree
 		std::string c() const /*override*/{
      switch (type) {
				case 1:
					return "void";
				break;
				case 2:
					return "char";
				break;
				case 3:
					return "short";
				break;
				case 4:
					return "int";
				break;
				case 5:
					return "long";
				break;
				case 6:
					return "float";
				break;
				case 7:
					return "double";
				break;
				case 8:
					return "signed";
				break;
				case 9:
					return "unsigned";
				break;

				default:
				throw std::runtime_error ("Unknow construct");
				break;
			}
		}

		//code-gen python
		virtual void python(std::string &dst) const override{
      //do nothing
      std::cerr<<"entering type_specifier"<<std::endl;
		}
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


#endif
