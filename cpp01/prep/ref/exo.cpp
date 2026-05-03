#include <iostream>
#include <string>

int main( void ) {

	int a = 1;
	int b = 2;

	int &refa = a;
	int &refb = b;

	std::cout << refa << " " << refb << std::endl;

	int temp = a;
	a = b;
	b = temp;

	std::cout << refa << " " << refb << std::endl;

	return 0;
}