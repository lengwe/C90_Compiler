#ifndef REGISTERS_HPP
#define REGISTERS_HPP

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <list>



class registers{
private:
	std::vector<std::string> reg;
	std::map<std::string, int> allVar; // 1 in reg 2 in
	int find_empty(){
		std::vector<std::string>::iterator it;
		it = find (reg.begin(), reg.end(),"0");
		if(it == reg.end()){
			return -1;
		}
		int n = it - reg.begin();
		return n;
	}
	int to_spill(){
		return *(usage.begin());
	}
	int callstack(std::string name){
		std::cerr << "call stack" << '\n';
		return -1;
	}
	std::string scope_name;
	std::list<int> usage;
	std::map<std::string,int> stack_map;
	int offset_count;
	int spill(int n){
		std::cout << "sw $t" << n << ", " << offset_count+16 << "($sp)" <<'\n';
		allVar[reg[n]] = offset_count;
		std::cerr << "offset_count stored @ " << reg[n] << ": " << offset_count << '\n';
		std::cerr << "actually stored" << allVar[reg[n]] << '\n';
		offset_count += 4;
		reg[n] = "0";
	}

	std::string load(std::string name, std::string &dst){
		std::string n = newVar(name, dst);
		std::cerr << "name: " << name << '\n';
		std::cerr << "allVar[name]+16 " <<  allVar[name]<< '\n';
		std::cout << "lw " << n << ", " << allVar[name]+16 << "($sp)" << '\n';
		return n;
	}


public:
	registers(std::string _scope_name){
		reg.resize(4,"0");
		scope_name = _scope_name;
		offset_count = 0;
	}
	std::string newVar(std::string name, std::string& dst){
		std::string out;
		int n = find_empty();
		if(n < 0){
			n = to_spill();
			spill(n);
					usage.pop_front();
		}
		reg[n] = name;
		usage.push_back(n);
		out = "$t"+std::to_string(n); //plus one cos register t0 is reserved.
				std::cerr << "new Var: " << name << " @ "<< out << '\n';
		return out;
	}
	std::string getScope(){
		return scope_name;
	}
	std::string findVar(std::string name, std::string& dst){
		std::vector<std::string>::iterator it;
		std::string out;
		it = find (reg.begin(), reg.end(),name);
		int n;
		//move it to back of the queue
		std::list<int>::iterator it2 = std::find(usage.begin(),usage.end(),n);
		usage.splice( usage.end(), usage, it2);
		//
		if(it == reg.end()){
			std::string r = load(name, dst);
			std::cout << r << '\n';
			return r;
		}
		else{
			n = it - reg.begin();
		}
		out = "$t"+std::to_string(n); //plus one cos register t0 is reserved.
		std::cerr << out << '\n';
		return out;
	}
	void killVar(std::string name){
	auto it = find (reg.begin(), reg.end(),name);
	*it = "0";
}


};


#endif
