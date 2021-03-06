#include "ast.hpp"
// #include <fstream>
#include <stdio.h>
#include <iostream>
std::vector<std::string> global;
int makeNameUnq = 0;



int main (int argc, char *argv[])
{
	registers Context("global");
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

	else if(argument == "-S"){
		freopen(argv[2],"r", stdin);
		freopen (argv[4],"w",stdout);
		const Node* ast=parseAST();
		std::string str1, destReg = "$2";
		ast->mips(str1, destReg,Context);
		//TODO:put into file
		fclose (stdin);
		fclose (stdout);
	}


	return 0;
}
