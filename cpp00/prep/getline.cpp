#include <iostream>
#include <string>

int	main( void ) {

	std::string name;

	std::cout << "Enter name: ";
	std::getline (std::cin, name);
	std::cout << "Hello " << name << " !\n";

	return 0;
}
