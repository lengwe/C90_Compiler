#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
#include <string>

class Node;

typedef const Node* Nodeptr;

class Node{
	public:
		 ~Node() {}

		std::string c()const;
		// void print(std::ostream &dst) const;
		//virtual void python(std::string &dst)const=0;

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
};

class external_declaration: public Node{
	private:
		int type;
		Nodeptr p;

	public:
		external_declaration(int type_in, Nodeptr _p) : type(type_in), p(_p){}
};


class function_definition : public Node {
private:
	int type;
	Nodeptr declaration_specifiers;
	Nodeptr declarator;
	Nodeptr declarator_list;
	Nodeptr compound_statement;
public:
	function_definition(int _type, Nodeptr _declaration_specifiers, Nodeptr _declarator, Nodeptr _declarator_list, Nodeptr _compound_statement):
	type(_type), declaration_specifiers(_declaration_specifiers), declarator(_declarator), declarator_list(_declarator_list), compound_statement(_compound_statement){}

};

class pointer : public Node{
private:
	int type;
	Nodeptr pointerptr;
	Nodeptr type_qualifier_list;
public:
	pointer(int _type, Nodeptr _pointer , Nodeptr _type_qualifier_list ) : type(_type) ,pointerptr(_pointer) , type_qualifier_list(_type_qualifier_list) {}
};



#endif
