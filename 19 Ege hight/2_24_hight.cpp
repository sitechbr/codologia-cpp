#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

int main() {
	
	std::string line;
	int k = 0;
	int maxi = 0;
	std::ifstream in("D:\\24.txt");
	
	if (in.is_open()) {
		getline(in, line);
	}
	in.close();
	
	for (int i = 1;i < line.size();i++) {
		if ((line[i] == 'K' and line[i - 1] == 'L') or (line[i - 1] == 'K' and line[i] == 'L')) {
			k = 1;
		}
		else {
			++k;
			if (k > maxi){
				maxi = k;
			}
		}
	}

	std::cout << maxi << std::endl;


	return 0;

}