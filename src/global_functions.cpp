#include "../include/global_functions.hpp"
#include <iostream>

std::string makeName(std::string base){
	std::cerr << "makeName called: " << makeNameUnq << '\n';
	return "_"+base+"_"+std::to_string(makeNameUnq++);
}
