#include <iostream>
int main()
{
	int	row = 0;
	while (row < 5)
	{
		int col = 4;
		while (col >= 0) {
			if (col > row)
				std::cout << "x ";
			else
				std::cout << col + 1 << " ";
			--col;
		}
		std::cout << "\n";
		++row;
	}
	return 0;
}
