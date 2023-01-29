#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::string line;
	std::ifstream in("D:\\24_demo.txt");
	int k = 1, m=0;
	if (in.is_open()) {
		getline(in, line);
	}
	in.close();
	
	for (int i = 0;i < line.size();i++) {
		if (line[i] == 'X' && line[i] == line[i+1]) {
			++k;
		}
		else {
			if (k > m) {
				m = k;
				
			}
			k = 1;
		}

		if (k > m) {
			m = k;
		}
	}
	std::cout << "max length = " << m << std::endl;
	
	return 0;
}