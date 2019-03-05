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
    postfix_expression(Nodeptr _p) : p(_p) {}
    //case 2
    postfix_expression(int type_in, Nodeptr _p) : type(type_in), p(_p) {}
    //case 3,4
    postfix_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in),l(_l), r(_r){}
    //case 5
    postfix_expression(int type_in, Nodeptr _l, std::string *string_in, Nodeptr _r) : type(type_in), l(_l), string(string_in), r(_r){}
    //case 6,7
    postfix_expression(int type_in, std::string *string_in) : type(type_in),string(string_in){}

};

#endif
