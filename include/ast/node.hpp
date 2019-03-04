#ifndef node_hpp
#define node_hpp

#include <iostream>
#include <string>

class Node;

typedef const Node* Nodeptr;

class Node{
	public:
		virtual ~Node() {}

		virtual std::string c()const=0;
		virtual void print(std::ostream &dst)const=0;
		virtual void python(std::string &dst)const=0;

};

class translation_unit: public Node{

	private:
		Nodeptr l,r,p;

	public:
		//function overloading for constructor
		translation_unit(Nodeptr _p) : p(_p) {}
		translation_unit(Nodeptr _l, Nodeptr _r) : l(_l),r(_r) {}
};

class external_declaration: public Node{
	private:
		Nodeptr p;
	public:
		external_declaration(Nodeptr _p) : p(_p){}
};


class type_specifier: public Node{
	private:
		int type;
	public:
		type_specifier(int type_in) : type(type_in) {}
		//~type_specifier(){delete type;}
		virtual void print(std::ostream &dst) const override{
			dst << type;
		}

		//this function only checks the tree
 		std::string c() const override{
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
			}
		}

		//code-gen python
		//void python().....
};

class primary_expression : public Node{
	private:
		Nodeptr p;
		int type;
		std::string* string;
	public:
		primary_expression(int type_in, std::string* string_in) : type(type_in),string(string_in){}
		primary_expression(int type_in, Nodeptr _p) : type(type_in),p(_p){}

		virtual void python(std::string &dst){
			switch (type) {
				case 1:
				case 2:
				case 3:
					dst=*string;
					//std::cout<<dst<<std::endl;
				break;

				case 4:
					std::string str;
					p->python(str);
					dst = "("+str+")";
				break;

			}
		}

		// std::string c() const override{
		// 	switch (type) {
		// 		case 1:
		// 		case 2:
		// 		case 3:
		// 		 return *string;
		// 		break;

};



#endif
