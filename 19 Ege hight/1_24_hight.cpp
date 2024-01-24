#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

int main() {
	
	std::string line;
	int maxi = 0;
	std::vector <std::string> lines;
	std::ifstream in("D:\\inf_26_04_21_24.txt");
	
	if (in.is_open()) {
		while (getline(in, line)) {
			lines.push_back(line);
		}

		
	}
	in.close();
	

	char alphabet[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	for (std::string s : lines) {
		for (char l : alphabet) {
			if ((s.rfind(l) - s.find(l) > maxi) and (std::count(s.begin(), s.end(), 'A'))<25 ) {
				maxi = s.rfind(l) - s.find(l);
			}
			
		}
	}
	std::cout << maxi << std::endl;

	return 0;

}