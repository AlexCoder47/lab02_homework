#include <iostream>

int main()
{
	std::string name;

	//Input name
	std::cout << "Input name: ";
	std::cin >> name;

	std::cout << "Hello world from " + name << std::endl;
}