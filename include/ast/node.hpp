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

		std::string c() const override{
			switch (type) {
				case 1:
					return "void";
				case 2:
					return "char";
				case 3:
					return "short";
				case 4:
					return "int";
				case 5:
					return "long";
				case 6:
					return "float";
				case 7:
					return "double";
				case 8:
					return "signed";
				case 9:
					return "unsigned";
			}
		}

		//code-gen python
		//void python().....
};

class unary_operator: public Node{
	private:
		int type;
	public:
		unary_operator(int type_in) : type(type_in) {}
		virtual void print(std::ostream &dst) const override{
			dst << type;
		}

		std::string c() const override{
			switch (type) {
				case 1:
					return "&";
				case 2:
					return "*";
				case 3:
					return "+";
				case 4:
					return "-";
				case 5:
					return "~";
				case 6:
					return "!";
			}
		}

		//void python()....
	};

#endif
