#include <iostream>
#include <string>

class Node{
	public:
		virtual ~Node() {}

		virtual void print(std::ostream &dst)const=0;

};

class type_specifier: public Node{
	private:
		std::string* type;
	public:
		type_specifier(std::string *type_in) : type(type_in) {}
		virtual void print(std::ostream &dst) const override{
			dst << *type;
		}

};
