#include "ast.hpp"
#include <fstream>
#include

int main(int argc, char *argv[])
{
    //std::cout<<"1"<<std::endl;
    const Node* ast=parseAST();

    if(argv[1]=="--translator"){

    }

    std::string str;
    std::ifstream cfile;
    std::ofstream pyfile;
    cfile.open("test.c");
    if (cfile.is_open()){
      while(!cfile.eof()){
        cfile>>str;
      }
    }
    cfile.close();

    ast->python(str);

    pyfile.open("out.py");
    pyfile<<str;
    pyfile<<"if __name__ == "__main__":
    \nimport sys
    \nret=main()
    \nsys.exit(ret)";

    return 0;
}
