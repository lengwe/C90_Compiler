#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

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
	int last_used(){
		return usage.front();

	}

	void spill(int n){
		std::cerr << "spill" << n+1 << '\n';

	}

public:
	std::queue<int> usage;
	registers(){
		reg.resize(9,"0");
	}
	std::string newVar(std::string name, std::string& dst){
		std::cerr << "adding" << name << '\n';
		std::string out;
		int n = find_empty();
		if(n < 0){
			n = last_used();
			usage.pop();
			spill(n);
		}
		reg[n] = name;
		usage.push(n);
		std::cout << "push" << n+1 << "in" << '\n';
		out = "$t"+std::to_string(n+1); //plus one cos register t0 is reserved.
		return out;
	}




};
