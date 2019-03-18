#include "ast.hpp"
// #include <fstream>
#include <iostream>
std::vector<std::string> global;

#include <stdio.h>

int main (int argc, char *argv[])
{
	std::string argument(argv[1]);
		if(argument == "--translate"){
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
  return 0;
}
