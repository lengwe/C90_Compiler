#include "ast.hpp"

int main()
{
    //std::cout<<"1"<<std::endl;
    const Node* ast=parseAST();

    //ast->print(std::cout);
    //std::cout<<std::endl;

    std::cout<<ast->c();



    return 0;
}
