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
	std::vector<std::string> arg;
	std::map<std::string, int> allVar; //name, offset
	int offset_count = 16;
	std::string scope_name;
	std::list<int> usage;
	std::string regUsed;


	int find_empty(){
		std::vector<std::string>::iterator it;
		if(scope_name == "global"){
			it = find (global.begin(), global.end(),"0");
			if(it == global.end()){
				return -1;
			}
			int n = it - global.begin();
			return n;
		}
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
	void spill(int n, std::string to){
		std::cout << "sw "<< regUsed << n << ", " << offset_count  << to <<'\n';
		allVar[reg[n]] = offset_count;
		std::cerr << "offset_count stored @ " << reg[n] << ": " << offset_count << '\n';
		offset_count += 4;
		reg[n] = "0";
	}
	std::string load(std::string name, std::string &dst){
		std::string n = newVar(name, dst);
		std::cerr << "name: " << name << '\n';
		std::cout << "lw " << n << ", " << allVar[name] << "($sp)" << '\n';
		return n;
	}
	void spillReg(std::string reg){
		std::cout << "sw "<< reg  << ", " << offset_count <<"($fp)"<<'\n';
		allVar[reg] = offset_count;
		std::cerr << "offset_count stored @ " << reg << ": " << offset_count << '\n';
		offset_count += 4;
	}


public:
	int argumentcount;
	std::string scope_start;
	std::string scope_end;
	int counter;
	std::vector<std::string> global;
	bool to_store = false;
	std::string store_at;
	bool to_print;
	std::string str_to_print;
	std::vector<std::string>init_list;
	registers(std::string _scope_name){
		to_print =false;
		scope_name = _scope_name;
		offset_count = 0;
		argumentcount = 0;
		counter = 0;
		offset_count = 16;
		regUsed = "$t";
		if(scope_name == "global"){
					regUsed = "$s";
		}
		global.resize(8,"0");
		reg.resize(10,"0");
		arg.resize(4,"0");
	}

	registers(std::string _scope_name, registers _global){
		to_print = false;
		to_store = false;

		scope_name = _scope_name;
		offset_count = 16;
		argumentcount = 0;
		counter = 0;
		regUsed = "$t";
		reg.resize(10,"0");
		arg.resize(4,"0");
		global = _global.global;
	}
	void savealltostack(){
		for(int i = 0; i < reg.size();i++){
			if(reg[i] != "0"){
				std::string name_tmp = reg[i];
				spill(i, "($fp)");
				reg[i] = name_tmp;
			}
		}
		spillReg("$a0");
		spillReg("$a1");
		spillReg("$a2");
		spillReg("$a3");
		spillReg("$2");
		spillReg("$3");
		spillReg("$31");
	}
	std::string loadall(std::string &dst){
		for(int i = 0; i < reg.size();i++){
			if(reg[i] != "0"){
				std::string n = regUsed+std::to_string(i);
				std::cerr << "loading " << reg[i] << '\n';
				std::cout << "lw " << n << ", " << allVar[reg[i]]  << "($fp)" << '\n';
			}
		}
		std::cout << "lw $a0, " << allVar["$a0"]  << "($fp)" << '\n';
		std::cout << "lw $a1, " << allVar["$a1"]  << "($fp)" << '\n';
		std::cout << "lw $a2, " << allVar["$a2"]  << "($fp)" << '\n';
		std::cout << "lw $a3, " << allVar["$a3"]  << "($fp)" << '\n';
		std::cout << "lw $3, " << allVar["$3"]  << "($fp)" << '\n';
		std::cout << "lw $31, " << allVar["$31"]  << "($fp)" << '\n';
		std::string name = newVar("_result",dst);
		std::cout << "move " << name << ", $2" <<  '\n';
		std::cout << "lw $2, " << allVar["$2"]  << "($fp)" << '\n';
		return name;
	}
	std::string newVar(std::string name, std::string& dst){
		std::cerr << "scope_name: " << scope_name << "making " << name << '\n';
		std::string t;
		int n = find_empty();
		if(n < 0){
			n = to_spill();
			spill(n,"($fp)");
			usage.pop_front();
		}
		if(scope_name == "global"){
			global[n] = name;
		}
		else{
			reg[n] = name;
			std::cerr << "reg " << regUsed << n << "is " << name << " in " <<scope_name << '\n';
		}
		usage.push_back(n);
		t = regUsed+std::to_string(n); //plus one cos register t0 is reserved.
		return t;
	}
	std::string newArray(std::string name, int size, std::string& dst){
				allVar[name] = offset_count;
				std::cerr << "new array name: " << name << "@" << offset_count << '\n';
				int tmp = offset_count;
				offset_count += size*4;
				return std::to_string(tmp);
	}

	int findArray(std::string name, std::string& dst){
		auto it = allVar.find(name);
		if(it != allVar.end()){
							std::cerr << "found array name: " << name << "@" << it->second << '\n';
			return (it->second);
		}
	}
	std::string getScope(){
		return scope_name;
	}
	std::string findVar(std::string name, std::string& dst){
		std::vector<std::string>::iterator it, argit, gloit;
		std::string out;
		int n;
		it = find (reg.begin(), reg.end(), name);
		//move it to back of the queue
		if(it == reg.end()){
			std::cerr << "cannot find" << '\n';
			argit = find(arg.begin(), arg.end(), name);
			if(argit != arg.end()){
				return "$a"+std::to_string(argit - arg.begin());
			}
			else{
				gloit= find (global.begin(), global.end(), name);
				if(gloit != global.end()){
					std::string n = newVar("globaladdress_"+name, dst);
					std::string n2 = newVar("global_"+name, dst);
					std::cout << "lui " << n << ", %hi(" << name << ")" << '\n';
					std::cout << "lw " << n2 << ", %lo(" << name << ")(" << n << ")" << '\n';
					to_store = true;
					store_at = "%lo("+name+")(" + n + ")";
					return n2;
				}
			}
			std::string r = load(name, dst);
			n = (r[r.size()-1])-48;
		}
		else{
			n = it - reg.begin();
		}

		std::list<int>::iterator it2 = std::find(usage.begin(),usage.end(),n);
		usage.splice( usage.end(), usage, it2);

		out = regUsed+std::to_string(n); //plus one cos register t0 is reserved.
		std::cerr << "trying to use " << name << " @ " << out << '\n';
		return out;
	}
	void killVar(std::string name){
	auto it = find (reg.begin(), reg.end(),name);
	*it = "0";
}
	void printusage(){
		//move it to back of the queue
	std::cerr << "print usage" << '\n';
	for(auto it = usage.begin(); it != usage.end(); it++){
		std::cerr << *it << '\n';
	}
		//
	}
	int addarg(std::string name){
		std::cerr << "adding arg" << '\n';
		arg[argumentcount] = name;
		std::cerr << "added " << name << " @ " << argumentcount << '\n';
		std::cerr << "addarg to " << scope_name << " @ " << argumentcount << '\n';
		argumentcount++;
		return argumentcount;
	} // increase argumentcount
};


#endif
