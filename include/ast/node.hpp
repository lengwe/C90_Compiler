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
		//virtual void python(std::string &dst)const=0;

};

class translation_unit: public Node{

	private:
		int type;
		Nodeptr l,r,p;

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
	Nodeptr declaration_specifiers;
	Nodeptr declarator;
	Nodeptr declarator_list;
	Nodeptr compound_statement;
public:
	function_definition(Nodeptr _declaration_specifiers, Nodeptr _declarator, Nodeptr _declarator_list, Nodeptr _compound_statement):
	declaration_specifiers(_declaration_specifiers), declarator(_declarator), declarator_list(_declarator_list), compound_statement(_compound_statement){}

};





#endif
