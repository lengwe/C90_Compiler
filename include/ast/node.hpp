#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <regex>

class Node;

extern std::vector<std::string> global;

typedef const Node* Nodeptr;

class Node{

	public:
		 ~Node() {}

		std::string c()const;
		//void print(std::ostream &dst) const=0;
		virtual void python(std::string &dst)const=0;

		void indent(std::string &dst) const{

		  std::size_t pos = 0;
		  while((pos=dst.find('\n', pos))!=std::string::npos){
		    dst.insert(pos+1,1,'\t');
		    pos++;
		  }

		  //dst.insert(0,1,'\t');
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

		void python(std::string &dst) const override {
			std::cerr<<"entering translation_unit\n";
			std::string str1,str2;
			switch (type) {
				case 1:
					p->python(str1);
					dst = str1;
					std::cerr<<"case 1 in trans: "<<dst<<std::endl;
					break;
				case 2:
					if(l!=NULL){
						l->python(str1);
						r->python(str2);
						dst = str1 + str2;
						std::cerr<<"case 2 in trans: "<<dst<<std::endl;
					}
					else{
						r->python(str2);
						dst = str2;
						std::cerr<<"case 2 in trans: "<<dst<<std::endl;
					}
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

		virtual void python(std::string &dst) const override{
			std::cerr<<"entering external_declaration\n";
			std::string str,g;
			std::regex id("^.*()$");
			switch (type) {
				case 1:{
					//print global variable
					p->python(str);
					dst = str;
					std::cerr<<"case 1 in ex: "<<dst<<std::endl;
				}
				break;

				case 2:{
				//print value of global variable
					p->python(str);
					dst = str;
					std::size_t pos = str.find("=");
					std::string variable(str,0,pos);
					if(!regex_match(variable,id)){
						std::cout<<"regex\n";
						global.push_back(variable);
					}
					for(int i=0; i<global.size(); i++){
						std::cout<<"global"<<global[i];
					}
					std::cerr<<"case 2 in ex: "<<dst<<std::endl;
				}
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

	virtual void python(std::string &dst) const override{
		std::cerr<<"entering function definition\n";
		std::string str1, str2, str3;
		switch (type) {
			case 1:
	  		declarator->python(str1);
				declaration_list->python(str2);
				compound_statement->python(str3);
				indent(str2);
				indent(str3);
				dst = "def " + str1 + str2 + str3;
				std::cerr<<"case 1 in func: "<<dst<<std::endl;
			break;

			case 2:
				declarator->python(str1);
				compound_statement->python(str2);
				indent(str2);
				dst = "def " + str1 + str2;
				std::cerr<<"case 2 in func: "<<dst<<std::endl;
			break;
		}

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
