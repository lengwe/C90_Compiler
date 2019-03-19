#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <list>

class registers{
private:
	std::vector<std::string> reg;
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

	void spill(int n){
		usage.pop_front();
		std::cerr << "spill" << n << '\n';

	}

	int callstack(std::string name){
		std::cerr << "call stack" << '\n';
		return -1;
	}

public:
	std::list<int> usage;
	registers(){
		reg.resize(10,"0");
	}
	std::string newVar(std::string name, std::string& dst){
		std::string out;
		int n = find_empty();
		if(n < 0){
			n = to_spill();
			spill(n);
		}
		reg[n] = name;
		usage.push_back(n);
		std::cout << "push" << n << "in" << '\n';
		out = "$t"+std::to_string(n); //plus one cos register t0 is reserved.
		return out;
	}

	std::string findVar(std::string name, std::string& dst){
		std::vector<std::string>::iterator it;
		std::string out;
		it = find (reg.begin(), reg.end(),name);
		int n;
		if(it == reg.end()){
			n = callstack(name);
		}
		else{
			n = it - reg.begin();
		}
		//move it to back of the queue
		std::list<int>::iterator it2 = std::find(usage.begin(),usage.end(),n);
		usage.splice( usage.end(), usage, it2);
		//
		out = "$t"+std::to_string(n); //plus one cos register t0 is reserved.
		return out;
	}




};
