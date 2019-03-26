#include "../include/global_functions.hpp"
#include <iostream>

std::string makeName(std::string base){
	std::cerr << "makeName called: " << makeNameUnq << '\n';
	return "_"+base+"_"+std::to_string(makeNameUnq++);
}

void loadimm(std::string destReg, int num){
	if(num > 0xFFFF){
	 std::cout << "lui " << destReg << (unsigned(num << 16)>>16) << std::endl;
	 std::cout << "ori " << destReg << (num | 0xFFFF) << std::endl;
	}
	std::cout << "li " << destReg << " , " << num << std::endl;
}
