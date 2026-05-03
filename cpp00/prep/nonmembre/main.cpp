#include "sample_class.hpp"

void	f0( void ) {

	Sample instance;

	std::cout << "NUmber of instances f0: " << Sample::getNbInst() << std::endl;
	return;
}

void	f1( void ) {

	Sample instance;

	std::cout << "Number of instances f1: " << Sample::getNbInst() << std::endl;
	f0();

	return;
}
int	main( void ) {

	std::cout << "Number of instances main1: " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances main2: " << Sample::getNbInst() << std::endl;

	return 0;
}
