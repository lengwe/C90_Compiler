#include "ast.hpp"

int main()
{
    //std::cout<<"1"<<std::endl;
    const Node* ast=parseAST();

    std::string str;
    ast->python(str);
    std::cout<<str;

    return 0;
}
