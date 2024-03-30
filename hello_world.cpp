#include <iostream>

int
main()
{
  std::string name;

	//Input
	std::cout << "Input name: ";
	std::cin >> name;

  // Output
  std::cout << "Hello world from " + name << std::endl;
}