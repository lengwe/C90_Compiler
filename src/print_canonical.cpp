#include "ast.hpp"
std::vector<std::string> global;
registers Context;
int main()
{
    //std::cout<<"1"<<std::endl;
    const Node* ast=parseAST();

    std::string str, destReg = "$2";
    ast->mips(str, destReg);
    std::cout<<str;

    return 0;
}
