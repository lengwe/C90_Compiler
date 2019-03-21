#include "ast.hpp"
std::vector<std::string> global;
registers Context;
int makeNameUnq = 0;
int main()
{
    //std::cout<<"1"<<std::endl;
    const Node* ast=parseAST();

    std::string dst;
    std::string str, destReg = "$2";
    //ast->mips(str, destReg);
    ast->python(str);
    std::cout<<"===================="<<std::endl;
    std::cout<<str;

    return 0;
}
