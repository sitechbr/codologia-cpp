#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string line;

    std::ifstream ins("D:\\hello.txt"); // окрываем файл для чтения
    if (ins.is_open())
    {
        while (getline(ins, line))
        {
            std::cout << line << std::endl;
        }
    }
    ins.close();     // закрываем файл

    std::cout << "End of program" << std::endl;
    return 0;
}