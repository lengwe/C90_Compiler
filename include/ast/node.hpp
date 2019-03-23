#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include "../registers.hpp"
#include "../global_functions.hpp"
class Node;
extern std::vector<std::string> global;

typedef const Node* Nodeptr;
extern int makeNameUnq;

std::string makeName(std::string base);

class Node{

	public:
		virtual ~Node() {}

		std::string c()const;
		//void print(std::ostream &dst) const=0;
		virtual void python(std::string &dst)const=0;
		virtual void mips(std::string &dst, std::string &destReg, registers &Context)const=0;

		void indent(std::string &dst) const{

		  std::size_t pos = 0;
		  while((pos=dst.find('\n', pos+1))!=std::string::npos){
		    dst.insert(pos+1,1,'\t');
		    //pos++;
		  }

		  dst.insert(0,1,'\t');
		}

};

class translation_unit: public Node{

	private:
		int type;
		Nodeptr l;
		Nodeptr r;
		Nodeptr p;

	public:
		//function overloading for constructor
		translation_unit(int type_in, Nodeptr _p) : type(type_in), p(_p) {}
		translation_unit(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in),l(_l),r(_r) {}
		~translation_unit(){
				delete l;
				delete r;
				delete p;
		}

		void python(std::string &dst) const override {
			//std::cerr<<"entering translation_unit\n";
			std::string str1,str2;
			switch (type) {
				case 1:
					p->python(str1);
					dst = str1;
					//std::cerr<<"case 1 in trans: "<<dst<<std::endl;
					break;
				case 2:
					if(l!=NULL){
						l->python(str1);
						r->python(str2);
						dst = str1 + str2;
						//std::cerr<<"case 2 in trans: "<<dst<<std::endl;
					}
					else{
						r->python(str2);
						dst = str2;
						//std::cerr<<"case 2 in trans: "<<dst<<std::endl;
					}
				break;
			}
		}

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override {
			 std::string str1,str2;
			// switch (type) {
			// 	case 1:
			// 		p->mips(str1);
			// 		dst = str1;
			// 		//std::cerr<<"case 1 in trans: "<<dst<<std::endl;
			// 		break;
			// 	case 2:
			// 		if(l!=NULL){
			// 			l->mips(str1);
			// 			r->mips(str2);
			// 			dst = str1 + str2;
			// 			//std::cerr<<"case 2 in trans: "<<dst<<std::endl;
			// 		}
			// 		else{
			// 			r->mips(str2);
			// 			dst = str2;
			// 			//std::cerr<<"case 2 in trans: "<<dst<<std::endl;
			// 		}
			// 	break;
			// }
			switch (type) {
				case 1:
					p->mips(str1,destReg, Context);
					//std::cerr<<"case 1 in trans: "<<dst<<std::endl;
					break;
		}
	}
};

class external_declaration: public Node{
	private:
		int type;
		Nodeptr p;

	public:
		external_declaration(int type_in, Nodeptr _p) : type(type_in), p(_p){}
		~external_declaration(){
				delete p;
		}


		virtual void python(std::string &dst) const override{
			//std::cerr<<"entering external_declaration\n";
			std::string str,g;
      std::regex id("^.*[(].*[)]$");
			switch (type) {
				case 1:{
					//print global variable
					p->python(str);
					dst = str;
					//std::cerr<<"case 1 in ex: "<<dst<<std::endl;
				}
				break;

				case 2:{
				//print value of global variable
					p->python(str);
					dst = str + "\n";
					std::size_t pos = str.find("=");
					std::string variable(str,0,pos);
					if(!regex_match(variable,id)){
          //std::cout<<"regex\n";
						global.push_back(variable);
					}
					// for(int i=0; i<global.size(); i++){
          //   //std::cout<<"global"<<global[i];
          // }
					//std::cerr<<"case 2 in ex: "<<dst<<std::endl;
				}
				break;
			}
		}

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
				switch(type){
					case 1:
						p -> mips(dst, destReg, Context);
						break;
				}
		}
};


class function_definition : public Node {
private:
	int type;
	Nodeptr declaration_specifiers;
	Nodeptr declarator;
	Nodeptr declaration_list;
	Nodeptr compound_statement;
public:
	function_definition(int _type, Nodeptr _declaration_specifiers, Nodeptr _declarator, Nodeptr _declarator_list, Nodeptr _compound_statement):
	type(_type), declaration_specifiers(_declaration_specifiers), declarator(_declarator), declaration_list(_declarator_list), compound_statement(_compound_statement){}

	~function_definition(){
			delete declaration_specifiers;
			delete declarator;
			delete declaration_list;
			delete compound_statement;
	}

	virtual void python(std::string &dst) const override{
		//std::cerr<<"entering function definition\n";
		std::string str1, str2, str3;
		// switch (type) {
		// 	case 1:
	  // 		declarator->python(str1);
		// 		declaration_list->python(str2);
		// 		compound_statement->python(str3);
		// 		indent(str2);
		// 		indent(str3);
		// 		dst = "def " + str1 + ":\n" + str2 + str3;
		// 		//std::cerr<<"case 1 in func: "<<dst<<std::endl;
		// 		break;
		//
		// 		case 2:
		// 		declarator->python(str1);
		// 		compound_statement->python(str2);
		// 		//std::cerr<<"case 2: str2 in func before: "<<str2<<std::endl;
		// 		indent(str2);
		// 		dst = "def " + str1 + ":\n" + str2 ;
		// 		//std::cerr<<"case 2: str1 in func: "<<str1<<std::endl;
		// 		//std::cerr<<"case 2: str2 in func: "<<str2<<std::endl;
		// 		//std::cerr<<"case 2 in func: "<<dst<<std::endl;
		// 		break;
		// 	}
		if(declarator!=NULL){
			declarator->python(str1);
		}

		if(declaration_list!=NULL){
			declaration_list->python(str2);
		}

		if(compound_statement!=NULL){
			compound_statement->python(str3);
		}

		//indent(str2);
		indent(str3);

		dst = "def " + str1 + ":\n" + str2 + str3 + "\n";
				// //std::cerr<<"str1 in func: "<<str1<<std::endl;
				// //std::cerr<<"str2 in func: "<<str2<<std::endl;
				// //std::cerr<<"str3 in func: "<<str3<<std::endl;
				// //std::cerr<<"dst in func: "<<dst<<std::endl;
	}
//int main(){int a; int y; return x;} int x(){int f;}
	virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
		std::string str;
		declarator->mips(str, destReg, Context);
		registers function_scope(str);
		std::cout << ".text" << '\n';
		std::cout << ".align 2" << '\n';
		std::cout << ".globl " << function_scope.getScope() <<'\n';
		std::cout << ".ent    " << function_scope.getScope() << '\n';
		std::cout << ".type "<<function_scope.getScope()<<",@function" << '\n';
		std::cout << str << ":" << '\n';
		std::cout << "addiu   $sp,$sp,-24" << '\n';
		std::cout << "sw      $fp,16($sp)" << '\n';
		std::cout << "sw			$ra, 20($sp)" << '\n';
		std::cout << "move    $fp,$sp" << '\n';
		compound_statement -> mips(dst, destReg, function_scope);
		std::cout << function_scope.getScope()+"_end" << ":" << '\n';
		std::cout << "move    $sp,$fp" << '\n';
		std::cout << "lw      $fp,16($sp)" << '\n';
		std::cout << "lw			$ra,20($sp)" << '\n';
		std::cout << "addiu   $sp,$sp,24" << '\n';
		std::cout << "j	$31" << '\n';
		std::cout << "nop" << '\n';

		std::cout << ".end	" << function_scope.getScope() << '\n';
	}

};

// class pointer : public Node{
// private:
// 	int type;
// 	Nodeptr pointerptr;
// 	Nodeptr type_qualifier_list;
// public:
// 	pointer(int _type, Nodeptr _pointer , Nodeptr _type_qualifier_list ) : type(_type) ,pointerptr(_pointer) , type_qualifier_list(_type_qualifier_list) {}
//
// 	virtual void python(std::string &dst) const override{
// 		//not implement
// 	}
//
// };



#endif
