#ifndef ast_expression_hpp
#define ast_expression_hpp

#include <string>
#include <iostream>
#include "node.hpp"

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

class postfix_expression : public Node{
  private:
    int type;
    Nodeptr p;
    Nodeptr l,r;
    std::string* string;
  public:
		//case 1,3,7,8
    postfix_expression(int type_in, Nodeptr _p) : type(type_in), p(_p){}
    //case 2,4
    postfix_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in),l(_l), r(_r){}
		//case 5,6
    postfix_expression(int type_in, Nodeptr _p, std::string *string_in) : type(type_in), p(_p), string(string_in){}



};

class argument_expression_list : public Node{
	private:
		int type;
		Nodeptr p;
		Nodeptr l,r;
	public:
		argument_expression_list(int type, Nodeptr _p) : type(type_in), p(_p){}
		argument_expression_list(int type, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r){}

};

class unary_expression : public Node{
	private:
		int type;
		Nodeptr p;
		Nodeptr l,r;
	public:
		//case 1,2,3
		unary_expression(int type, Nodeptr _p) : type(type_in), p(_p) {}
		unary_expression(int type, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r) {}

};

#endif
