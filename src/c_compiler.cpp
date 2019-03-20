#include "ast.hpp"
// #include <fstream>
#include <iostream>
std::vector<std::string> global;

registers Context;
#include <stdio.h>

int main (int argc, char *argv[])
{
	std::string argument(argv[1]);
	std::string file(argv[2]);
	if(argument == "--translate" && file != "print"){
		freopen(argv[2],"r", stdin);
		freopen (argv[4],"w",stdout);
		const Node* ast=parseAST();
		std::string out;
		ast->python(out);
		std::cout << out;
		std::cout << "if __name__ == \"__main__\":" <<std::endl;
		std::cout << "	import sys" << std::endl;
		std::cout << "	ret=main()" << std::endl;
		std::cout << "	sys.exit(ret)" <<  std::endl;
		fclose (stdin);
		fclose (stdout);
	}
	// else if(argument == "--translate"){
	// 	//std::cout<<"1"<<std::endl;
	//   const Node* ast=parseAST();
	//
	//   std::string str;
	//   ast->python(str);
	//   std::cout<<str;
	//
	// }
	else if(argument == "--S"){
		freopen(argv[2],"r", stdin);
		freopen (argv[4],"w",stdout);
		const Node* ast=parseAST();
		std::string str1, destReg = "$2";
		ast->mips(str1, destReg);
		std::cout<<str1;
		fclose (stdin);
		fclose (stdout);
	}

	return 0;
}
