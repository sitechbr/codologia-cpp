 #include <iostream>

 int main()
 {
		int choice;
		do
		{
			std::cout << "Please make a selection: \n";
			std::cout << "1) Addition\n";
			std::cout << "2) Subtraction\n";
			std::cout << "3) Multiplication\n";
			std::cout << "4) Division\n";
			std::cin >> choice;
		}
		while (choice != 1 && choice != 2 &&
		choice != 3 && choice != 4);

		
		std::cout << "You selected option #" << choice << "\n";
	
		return 0;
	 }