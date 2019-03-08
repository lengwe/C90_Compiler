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

		virtual void print(std::ostream &dst) const override{
			dst << "primary_expression";
		}

		virtual void python(std::string &dst) const override{
			switch (type) {
				case 1:
				case 2:
				case 3:
					dst=*string ;
					std::cerr<<"entering primary_expression"<<std::endl;
				break;

				case 4:
					std::string str;
					p->python(str);
					dst = "("+str+")";
					std::cerr<<"entering primary_expression"<<std::endl;
				break;
			}
		}

		std::string c() const override{
			switch (type) {
				case 1:
				case 2:
				case 3:
				 return *string;
				break;
			}
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

		virtual void print(std::ostream &dst) const override{
			dst << "postfix_expression";
		}

};

class argument_expression_list : public Node{
	private:
		int type;
		Nodeptr p;
		Nodeptr l,r;
	public:
		argument_expression_list(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r){}

		virtual void print(std::ostream &dst) const override{
			dst << "postfix_expression";
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

		virtual void print(std::ostream &dst) const override{
			dst << "unary_expression";
		}

};

class cast_expression :public Node{
	private:
		Nodeptr l;
		Nodeptr r;
	public:
		cast_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}

		virtual void print(std::ostream &dst) const override{
			dst << "cast_expression";
		}

};

class multiplicative_expression : public Node{
	private:
		int type;
		Nodeptr l;
		Nodeptr r;

	public:
		multiplicative_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r){}

	virtual void print(std::ostream &dst) const override{
			dst << "unary_expression";
		}

};

class additive_expression : public Node{
	private:
		int type;
		Nodeptr l,r;

	public:
		additive_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r){}

		virtual void print(std::ostream &dst) const override{
			dst << "additive_expression";
		}

};

class shift_expression : public Node{
	private:
		int type;
		Nodeptr l,r;

	public:
		shift_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r){}

		virtual void print(std::ostream &dst) const override{
			dst << "shift_expression";
		}

};

class relational_expression : public Node{
	private:
		int type;
		Nodeptr l,r;

	public:
		relational_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r){}

		virtual void print(std::ostream &dst) const override{
			dst << "relational_expression";
		}

};

class equality_expression : public Node{
	private:
		int type;
		Nodeptr l,r;

	public:
		equality_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r){}

		virtual void print(std::ostream &dst) const override{
			dst << "equality_expression";
		}
};

class and_expression : public Node{
	private:
		Nodeptr l,r;

	public:
		and_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}

		virtual void print(std::ostream &dst) const override{
			dst << "and_expression";
		}

};

class exclusive_or_expression : public Node{
	private:
		Nodeptr l,r;

	public:
		exclusive_or_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}

		virtual void print(std::ostream &dst) const override{
			dst << "exclusive_or_expression";
		}
};

class inclusive_or_expression : public Node{
	private:
		Nodeptr l,r;

	public:
		inclusive_or_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}

};

class logical_and_expression : public Node{
	private:
		Nodeptr l,r;

	public:
		logical_and_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}

};

class logical_or_expression : public Node{
	private:
		Nodeptr l,r;

	public:
		logical_or_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}

};

class conditional_expression : public Node{
	private:
		Nodeptr l,p,r;
	public:
		conditional_expression(Nodeptr _l, Nodeptr _p, Nodeptr _r) : l(_l), p(_p), r(_r){}

};

class assignment_expression : public Node{
	private:
		Nodeptr l;
		Nodeptr r;
		std::string* assign_op;
	public:
		assignment_expression(Nodeptr _l, std::string* op_in,Nodeptr _r) : l(_l), assign_op(op_in), r(_r){}

};

class expression : public Node{
	private:
		Nodeptr l;
		Nodeptr r;

	public:
		expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}

};

#endif
