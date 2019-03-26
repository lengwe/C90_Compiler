#include "../include/global_functions.hpp"
#include <iostream>

std::string makeName(std::string base){
	std::cerr << "makeName called: " << makeNameUnq << '\n';
	return "_"+base+"_"+std::to_string(makeNameUnq++);
}

void loadimm(std::string destReg, int num){
	if(num > 0xFFFF){
	 std::cout << "lui " << destReg << (unsigned(num << 16)>>16) << '\n';
	 std::cout << "ori " << destReg << (num | 0xFFFF) <<'\n';
	}
	std::cout << "li " << destReg << " , " << num << '\n';
}
