#ifndef AST_EXPRESSION_HPP
#define AST_EXPRESSION_HPP

#include <string>
#include <iostream>
#include "node.hpp"

class primary_expression : public Node{
	private:
		Nodeptr p;
		int type;
		std::string* string;
	public:
		primary_expression(int type_in, std::string* string_in): type(type_in),string(string_in){}
		primary_expression(int type_in, Nodeptr _p) : type(type_in), p(_p) {}

		// virtual void print(std::ostream &dst) const /*override*/{
		// 	dst << type;
		// }

		virtual void python(std::string &dst) const override{
			std::cerr<<"entering primary_expression\n";;
			std::string str;
			switch (type) {
				case 1:
				case 2:
				case 3:
					dst=*string;
					//std::cout<<dst<<std::endl;
				break;
				case 4:
					p->python(str);
					dst = "("+str+")";
				break;
				case 5:
				case 6:
					dst = "-" + *string;
				break;

			}
		}

		// std::string c() const /*override*/{
		// 	switch (type) {
		// 		case 1:
		// 		case 2:
		// 		case 3:
		// 		 return *string;
			// 	break;
			// }
		// }
		};

class postfix_expression : public Node{
  private:
    int type;
    Nodeptr p;
    Nodeptr l;
		Nodeptr r;
    std::string* string;
  public:
		//case 2,6,7
    postfix_expression(int type_in, Nodeptr _p) : type(type_in), p(_p){}
    //case 1,3
    postfix_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in),l(_l), r(_r){}
		//case 4,5
    postfix_expression(int type_in, Nodeptr _p, std::string *string_in) : type(type_in), p(_p), string(string_in){}

		virtual void python(std::string &dst) const override{

		}
};

class argument_expression_list : public Node{
	private:
		int type;
		Nodeptr p;
		Nodeptr l,r;
	public:
		argument_expression_list(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r){}

		virtual void python(std::string &dst) const override{

		}

};

class unary_expression : public Node{
	private:
		int type;
		Nodeptr p;
		Nodeptr l,r;
		std::string* string;
	public:
		//case 1,2
		unary_expression(int type_in, Nodeptr _p) : type(type_in), p(_p) {}
		//case 3
		unary_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r) {}
		//case 4,5
		unary_expression(int type_in, std::string* string_in, Nodeptr _p) : type(type_in), string(string_in), p(_p) {}

		virtual void python(std::string &dst) const override{

		}
};

class cast_expression :public Node{
	private:
		Nodeptr l;
		Nodeptr r;
	public:
		cast_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}

		virtual void python(std::string &dst) const override{

		}
};

class multiplicative_expression : public Node{
	private:
		int type;
		Nodeptr l;
		Nodeptr r;

	public:
		multiplicative_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r){}

		virtual void python(std::string &dst) const override{
			std::string str1, str2;
			std::cerr<<"entering multiplicative_expression\n";;
			switch (type) {
				case 1:
					l->python(str1);
					r->python(str2);
					dst = str1 + "*" + str2;
				break;
			}
		}
};

class additive_expression : public Node{
	private:
		int type;
		Nodeptr l;
		Nodeptr r;

	public:
		additive_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r){}

		virtual void python(std::string &dst) const override{
			std::string str1, str2;
			std::cerr<<"entering additive_expression\n";;
			switch(type){
				case 1:
				l->python(str1);
				r->python(str2);
				dst = str1 + "+" + str2;
				break;

				case 2:
				l->python(str1);
				r->python(str2);
				dst = str1 + "-" + str2;
				break;

				default:
				throw std::runtime_error ("Unknow construct");
				break;
			}
		}
};

class shift_expression : public Node{
	private:
		int type;
		Nodeptr shift_expressionptr,additive_expression;

	public:
		shift_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), shift_expressionptr(_l), additive_expression(_r){}

		virtual void python(std::string &dst) const override{
			std::string str1, str2, op;
			shift_expressionptr->python(str1);
			additive_expression->python(str2);
			if(type == 1){
				op = "<<";
			}
			else if(type == 2){
				op = ">>";
			}
			dst = str1 + op + str2;
		}
};

class relational_expression : public Node{
	private:
		int type;
		Nodeptr l,r;

	public:
		relational_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r){}

		virtual void python(std::string &dst) const override{
			std::string str1, str2;
			std::cerr<<"entering relational_expression\n";
			switch(type){
				case 1:
				l->python(str1);
				r->python(str2);
				dst = str1 + "<" + str2;
				break;

				case 2:
				l->python(str1);
				r->python(str2);
				dst = str1 + ">" + str2;
				break;

				default:
				throw std::runtime_error ("Unknow construct");
				break;
			}
		}
};

class equality_expression : public Node{
	private:
		int type;
		Nodeptr l,r;

	public:
		equality_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r){}

		virtual void python(std::string &dst) const override{
			std::string str1, str2;
			std::cerr<<"entering equality_expression\n";
			switch(type){
				case 1:
				l->python(str1);
				r->python(str2);
				dst = str1 + "==" + str2;
				break;

				case 2:
				l->python(str1);
				r->python(str2);
				dst = str1 + "!=" + str2;
				break;

				default:
				throw std::runtime_error ("Unknow construct");
				break;
			}
		}
};

class and_expression : public Node{
	private:
		Nodeptr l,r;

	public:
		and_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}

		virtual void python(std::string &dst) const override{

		}

};

class exclusive_or_expression : public Node{
	private:
		Nodeptr l,r;

	public:
		exclusive_or_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}

		virtual void python(std::string &dst) const override{

		}

};

class inclusive_or_expression : public Node{
	private:
		Nodeptr l,r;

	public:
		inclusive_or_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}

		virtual void python(std::string &dst) const override{

		}

};

class logical_and_expression : public Node{
	private:
		Nodeptr l,r;

	public:
		logical_and_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}

		virtual void python(std::string &dst) const override{
			std::string str1, str2;
			std::cerr<<"entering logical_and_expression\n";
					l->python(str1);
					r->python(str2);
					dst = str1 + "and" + str2;
		}


};

class logical_or_expression : public Node{
	private:
		Nodeptr l,r;

	public:
		logical_or_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}

		virtual void python(std::string &dst) const override{
			std::string str1, str2;
			std::cerr<<"entering logical_or_expression\n";
					l->python(str1);
					r->python(str2);
					dst = str1 + "or" + str2;
		}

};

class conditional_expression : public Node{
	private:
		Nodeptr l,p,r;
	public:
		conditional_expression(Nodeptr _l, Nodeptr _p, Nodeptr _r) : l(_l), p(_p), r(_r){}

		virtual void python(std::string &dst) const override{

		}

};

class assignment_expression : public Node{
	private:
		Nodeptr l;
		Nodeptr r;
		std::string* assign_op;
	public:
		assignment_expression(Nodeptr _l, std::string* op_in,Nodeptr _r) : l(_l), assign_op(op_in), r(_r){}

		virtual void python(std::string &dst) const override{
			std::string str1, str2;
			l->python(str1);
			r->python(str2);

			dst = str1 + *assign_op + str2;
		}
};

class expression : public Node{
	private:
		Nodeptr l;
		Nodeptr r;

	public:
		expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}

		virtual void python(std::string &dst) const override{
			std::cerr<<"entering expression\n";
		}

};



#endif
