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
		~primary_expression(){
			delete p;
		}

		// virtual void print(std::ostream &dst) const /*override*/{
		// 	dst << type;
		// }

		virtual void python(std::string &dst) const override{
			//std::cerr<<"entering primary_expression\n";;
			std::string str;
			switch (type) {
				case 1:
				case 2:
				case 3:
					dst=*string;
					////std::cout<<dst<<std::endl;
				break;
				case 4:
					p->python(str);
					dst = "("+str+")";
				break;
				case 5:
				break;
				case 6:
					dst = "-" + *string;
				break;

			}
		}

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
			std::cerr << "in primary expression" << '\n';
			switch(type){
				case 1:
				if(dst == "func"){
						dst = *string;
						return;
				}
					dst = Context.findVar(*string, dst);
					break;
				case 2:
					dst = *string;
					break;
			}
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

		~postfix_expression(){
			delete p,l,r;
		}

		virtual void python(std::string &dst) const override{
			std::string str, str2;
			switch (type) {
				case 1:
					l->python(str);
					r->python(str2);
					dst = str+"["+str+"]";
				break;

				case 2:
					p->python(str);
					dst = str+"()";
				break;

				case 3:
					l->python(str);
					r->python(str2);
					dst = str+"("+str2+")";
				break;

				case 4:
					l->python(str);
					dst = str+"."+(*string);
				break;

				case 5:
				case 6:
					p->python(str);
					dst = str+"+=1";
					break;
				case 7:
					p->python(str);
					dst = str+"-=1";
				break;
			}
		}

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
			std::cerr << "in postfix" << '\n';
			std::string str = "func";
			p->mips(str, destReg, Context);
			if(type == 2|| type == 3){
					Context.savealltostack();
					std::cout << "jal " << str <<'\n';
					std::cout << "nop" << '\n';
					dst = Context.loadall(dst);
			}
		}
};

class argument_expression_list : public Node{
	private:
		int type;
		Nodeptr l,r;
	public:
		argument_expression_list(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r){}
		~argument_expression_list(){
			delete l;
			delete r;
		}

		virtual void python(std::string &dst) const override{
			std::string str,str2;
			l->python(str);
			r->python(str2);
			dst = str+","+str2;
		}

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}

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

		~unary_expression(){
			delete p;
			delete l;
			delete r;
		}

		virtual void python(std::string &dst) const override{
			//std::cerr<<"entering unary_expression\n";
			std::string str;
			switch (type) {
				case 3:
					p->python(str);
					dst = (*string)+str;
					//std::cout<<"string in unary_expression "<<*string<<'\n';
				break;

				case 1:
				case 2:
				case 4:
				case 5:
				break;
			}
		}

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
};

class cast_expression :public Node{
	private:
		Nodeptr l;
		Nodeptr r;
	public:
		cast_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}
		~cast_expression(){
			delete l,r;
		}

		virtual void python(std::string &dst) const override{

		}

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
};

class multiplicative_expression : public Node{
	private:
		int type;
		Nodeptr l;
		Nodeptr r;

	public:
		multiplicative_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r){}
		~multiplicative_expression(){
			delete l;
			delete r;
		}

		virtual void python(std::string &dst) const override{
			std::string str1, str2;
			//std::cerr<<"entering multiplicative_expression\n";;
			switch (type) {
				case 1:
					l->python(str1);
					r->python(str2);
					dst = str1 + "*" + str2;
				break;
			}
		}

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
			std::string str1, str2;
			switch(type){
				case 1:
				l->mips(str1, destReg, Context);
				r->mips(str2, destReg, Context);
				if(str1[0] == '$' && str2[0] == '$'){
				std::cout << "mult " << str1 << ", " << str2 << std::endl;
				std::cout << "mflo " << destReg <<  std::endl;
				//TODO handle non int
				}
				else if(str1[0] != '$' && str2[0] != '$'){
					std::cout << "li " << destReg << ", " << (std::stoi(str1)*std::stoi(str2)) << std::endl;
				}
				//TODO check for overflow
				else if (str1[0] != '$'){
					std::string s = Context.newVar("0tmp", dst);
					std::cerr << "create 0tmp" << '\n';
					std::cout << "li " << s << ", " << str1 << '\n';
					std::cerr << "used 0tmp" << '\n';
					std::cout << "mult "  << str2 << ", " << s << std::endl;
					std::cout << "mflo " << destReg <<  std::endl;
					Context.killVar("0tmp");
					std::cerr << "destroy 0tmp" << '\n';
				}
				else{
					std::string s = Context.newVar("0tmp", dst);
					std::cerr << "create 0tmp" << '\n';
					std::cout << "li " << s << ", " << str2 << '\n';
					std::cerr << "used 0tmp" << '\n';
					std::cout << "mult " << str1 << ", " << s << std::endl;
					std::cout << "mflo " << destReg <<  std::endl;
					Context.killVar("0tmp");
					std::cerr << "destroy 0tmp" << '\n';
				}
				dst = destReg;
				//TODO
				break;

				case 2:
					l->mips(str1, destReg, Context);
					r->mips(str2, destReg, Context);
					if(str1[0] == '$' && str2[0] == '$'){
					std::cout << "div " << str1 << ", " << str2 << std::endl;
					std::cout << "mflo " << destReg <<  std::endl;
					//TODO handle non int
					}
					else if(str1[0] != '$' && str2[0] != '$'){
						std::cout << "li " << destReg << ", " << (std::stoi(str1)/std::stoi(str2)) << std::endl;
					}
					//TODO check for overflow
					else if (str1[0] != '$'){
						std::string s = Context.newVar("0tmp", dst);
						std::cerr << "create 0tmp" << '\n';
						std::cout << "li " << s << ", " << str1 << '\n';
						std::cerr << "used 0tmp" << '\n';
						std::cout << "div " << destReg << ", " << str2 << ", " << s << std::endl;
						std::cout << "mflo " << destReg <<  std::endl;
						Context.killVar("0tmp");
						std::cerr << "destroy 0tmp" << '\n';
					}
					else{
						std::string s = Context.newVar("0tmp", dst);
						std::cerr << "create 0tmp" << '\n';
						std::cout << "li " << s << ", " << str2 << '\n';
						std::cerr << "used 0tmp" << '\n';
						std::cout << "div " << destReg << ", " << str1 << ", " << s << std::endl;
						std::cout << "mflo " << destReg <<  std::endl;
						Context.killVar("0tmp");
						std::cerr << "destroy 0tmp" << '\n';
					}
					dst = destReg;
				break;

				default:
				throw std::runtime_error ("Unknow construct");
				break;

				case 3:
				std::string str1, str2;
					l->mips(str1, destReg, Context);
					r->mips(str2, destReg, Context);
					if(str1[0] == '$' && str2[0] == '$'){
						std::cout << "div " << str1 << ", " << str2 << std::endl;
						std::cout << "mfhi " << destReg <<  std::endl;
						//TODO handle non int
					}
					else if(str1[0] != '$' && str2[0] != '$'){
						std::cout << "li " << destReg << ", " << (std::stoi(str1)%std::stoi(str2)) << std::endl;
					}
					//TODO check for overflow
					else if (str1[0] != '$'){
						std::string s = Context.newVar("0tmp", dst);
						std::cerr << "create 0tmp" << '\n';
						std::cout << "li " << s << ", " << str1 << '\n';
						std::cerr << "used 0tmp" << '\n';
						std::cout << "div " << destReg << ", " << str2 << ", " << s << std::endl;
						std::cout << "mfhi " << destReg <<  std::endl;
						Context.killVar("0tmp");
						std::cerr << "destroy 0tmp" << '\n';
					}
					else{
						std::string s = Context.newVar("0tmp", dst);
						std::cerr << "create 0tmp" << '\n';
						std::cout << "li " << s << ", " << str2 << '\n';
						std::cerr << "used 0tmp" << '\n';
						std::cout << "div " << destReg << ", " << str1 << ", " << s << std::endl;
						std::cout << "mfhi " << destReg <<  std::endl;
						Context.killVar("0tmp");
						std::cerr << "destroy 0tmp" << '\n';
					}
					dst = destReg;
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
		~additive_expression(){
			delete l;
			delete r;
		}

		virtual void python(std::string &dst) const override{
			std::string str1, str2;
			//std::cerr<<"entering additive_expression\n";;
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

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
			std::string str1, str2;
			switch(type){
				case 1:
				l->mips(str1, destReg, Context);
				r->mips(str2, destReg, Context);
				if(str1[0] == '$' && str2[0] == '$'){
				std::cout << "add " << destReg << ", " << str1 << ", " << str2 << std::endl;
				}
				else if(str1[0] != '$' && str2[0] != '$'){
					std::cout << "li " << destReg << ", " << (std::stoi(str1)+std::stoi(str2)) << std::endl;
				}
				else if (str1[0] != '$'){
					std::cout << "addiu " << destReg << ", " << str2 << ", " << str1 << std::endl;
				}
				else{
					std::cout << "addiu " << destReg << ", " << str1 << ", " << str2 << std::endl;
				}
				dst = destReg;
				//TODO
				break;

				case 2:
				l->mips(str1, destReg, Context);
				r->mips(str2, destReg, Context);
				if(str1[0] == '$' && str2[0] == '$'){
				std::cout << "sub " << destReg << ", " << str1 << ", " << str2 << std::endl;
				}
				else if(str1[0] != '$' && str2[0] != '$'){
					std::cout << "li " << destReg << ", " << (std::stoi(str1)-std::stoi(str2)) << std::endl;
				}
				else if (str1[0] != '$'){
					std::cout << "addiu " << destReg << ", " << str2 << ", " << "-"+str1 << std::endl;
					std::cout << "sub " << destReg << ", $zero, " << destReg << std::endl;
				}
				else{
					std::cout << "addiu " << destReg << ", " << str1 << ", " << "-"+str2 << std::endl;
				}
				dst = destReg;
				//TODO
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
		~shift_expression(){
			delete shift_expressionptr;
			delete additive_expression;
		}

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

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
};

class relational_expression : public Node{
	private:
		int type;
		Nodeptr l,r;

	public:
		relational_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r){}
		~relational_expression(){
			delete l;
			delete r;
		}

		virtual void python(std::string &dst) const override{
			std::string str1, str2;
			//std::cerr<<"entering relational_expression\n";
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

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
			std::string str1, str2, tmp;
			l->mips(str1, destReg, Context);
			r->mips(str2, destReg, Context);
			if(type == 2){
				tmp = str1;
				str1 = str2;
				str2 = tmp;
			}
			std::cerr << str1 <<  " " << str2 << '\n';
			if(str1[0] == '$' && str2[0] == '$'){
			std::cout << "slt " << destReg << ", " << str1 << ", " << str2 << std::endl;
			}
			else if(str1[0] != '$' && str2[0] != '$'){
				std::cout << "li " << destReg << ", " << (std::stoi(str1)<std::stoi(str2)) << std::endl;
			}
			else if (str1[0] != '$'){
				std::cout << "slti " << destReg << ", " << str2 << ", " << std::stoi(str1)+1 << std::endl;
				std::cout << "xori " << destReg << ", " << destReg << ", 0x1" << std::endl;
			}
			else{
				std::cout << "slti " << destReg << ", " << str1 << ", " << str2 << std::endl;
			}
			dst = destReg;
		}
};

class equality_expression : public Node{
	private:
		int type;
		Nodeptr l,r;

	public:
		equality_expression(int type_in, Nodeptr _l, Nodeptr _r) : type(type_in), l(_l), r(_r){}
		~equality_expression(){
			delete l;
			delete r;
		}

		virtual void python(std::string &dst) const override{
			std::string str1, str2;
			//std::cerr<<"entering equality_expression\n";
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

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}
};

class and_expression : public Node{
	private:
		Nodeptr l,r;

	public:
		and_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}
		~and_expression(){
			delete l;
			delete r;
		}

		virtual void python(std::string &dst) const override{

		}

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}

};

class exclusive_or_expression : public Node{
	private:
		Nodeptr l,r;

	public:
		exclusive_or_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}
		~exclusive_or_expression(){
			delete l;
			delete r;
		}

		virtual void python(std::string &dst) const override{

		}

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}

};

class inclusive_or_expression : public Node{
	private:
		Nodeptr l,r;

	public:
		inclusive_or_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}
		~inclusive_or_expression(){
			delete l;
			delete r;
		}

		virtual void python(std::string &dst) const override{

		}

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}

};

class logical_and_expression : public Node{
	private:
		Nodeptr l,r;

	public:
		logical_and_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}
		~logical_and_expression(){
			delete l;
			delete r;
		}

		virtual void python(std::string &dst) const override{
			std::string str1, str2;
			//std::cerr<<"entering logical_and_expression\n";
					l->python(str1);
					r->python(str2);
					dst = str1 + " and " + str2;
		}

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
			std::string str1, str2;
			l->mips(str1, destReg, Context);
			r->mips(str2, destReg, Context);
			if(str1[0] == '$' && str2[0] == '$'){
			std::cout << "and " << destReg << ", " << str1 << ", " << str2 << std::endl;
			}
			else if(str1[0] != '$' && str2[0] != '$'){
				std::cout << "li " << destReg << ", " << (std::stoi(str1)&&std::stoi(str2)) << std::endl;
			}
			else if (str1[0] != '$'){
				std::cout << "andi " << destReg << ", " << str2 << ", " << str1 << std::endl;
			}
			else{
				std::cout << "andi " << destReg << ", " << str1 << ", " << str2 << std::endl;
			}
			dst = destReg;
			//TODO
		}

};

class logical_or_expression : public Node{
	private:
		Nodeptr l,r;

	public:
		logical_or_expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}
		~logical_or_expression(){
			delete l;
			delete r;
		}

		virtual void python(std::string &dst) const override{
			std::string str1, str2;
			//std::cerr<<"entering logical_or_expression\n";
					l->python(str1);
					r->python(str2);
					dst = str1 + " or " + str2;
		}

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
			std::string str1, str2;
			l->mips(str1, destReg, Context);
			r->mips(str2, destReg, Context);
			if(str1[0] == '$' && str2[0] == '$'){
			std::cout << "or " << destReg << ", " << str1 << ", " << str2 << std::endl;
			}
			else if(str1[0] != '$' && str2[0] != '$'){
				std::cout << "li " << destReg << ", " << (std::stoi(str1)||std::stoi(str2)) << std::endl;
			}
			else if (str1[0] != '$'){
				std::cout << "ori " << destReg << ", " << str2 << ", " << str1 << std::endl;
			}
			else{
				std::cout << "ori " << destReg << ", " << str1 << ", " << str2 << std::endl;
			}
			dst = destReg;
			//TODO

		}

};

class conditional_expression : public Node{
	private:
		Nodeptr l,p,r;
	public:
		conditional_expression(Nodeptr _l, Nodeptr _p, Nodeptr _r) : l(_l), p(_p), r(_r){}
		~conditional_expression(){
			delete l;
			delete r;
		}

		virtual void python(std::string &dst) const override{

		}

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{


		}

};

class assignment_expression : public Node{
	private:
		Nodeptr l;
		Nodeptr r;
		std::string* assign_op;
	public:
		assignment_expression(Nodeptr _l, std::string* op_in,Nodeptr _r) : l(_l), assign_op(op_in), r(_r){}
		~assignment_expression(){
			delete l;
			delete r;
		}

		virtual void python(std::string &dst) const override{
			std::string str1, str2;
			l->python(str1);
			r->python(str2);

			dst = str1 + *assign_op + str2;
		}

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{
			std::cerr << "in ass, assop = " << *assign_op << '\n';
			std::string str, str2;
			if(*assign_op == "="){
				l->mips(str, destReg, Context);
				r->mips(str2, str, Context);
				if(str2[0] != '$'){
					std::cout << "addiu " << str << ", $zero, " << str2 << '\n';
				}
				else{
					std::cout << "addu " << str << ", $zero, " << str2 << '\n';
				}
			}
		}
};

class expression : public Node{
	private:
		Nodeptr l;
		Nodeptr r;

	public:
		expression(Nodeptr _l, Nodeptr _r) : l(_l), r(_r){}
		~expression(){
			delete l;
			delete r;
		}

		virtual void python(std::string &dst) const override{
			std::string str, str2;
			//std::cerr<<"entering expression\n";
			l->python(str);
			r->python(str2);
			dst = str+","+str2;
		}

		virtual void mips(std::string &dst, std::string &destReg, registers &Context) const override{}

};



#endif
