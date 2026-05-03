#include <iostream>
#include <fstream>

int main( void ) {

	std::ifstream	ifs ("numbers");
	unsigned int	dst;
	unsigned int	dst1;
	ifs >> dst >> dst1;

	std::cout << dst << " " << dst1 << std::endl;
	ifs.close();

	std::ofstream	ofs("test.out");
	ofs << "I like ponies a whole damn lot" << std::endl;
	ofs.close();
}