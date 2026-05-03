#include "sample_struct.hpp"

SampleStruct::SampleStruct( void ) {

	std::cout << "COnstructor called" << std::endl;

	this->foo = 42;
	std::cout << "this->foo: " << this->foo <<std::endl;

	bar();

	return;
}

SampleStruct::~SampleStruct( void ) {

	std::cout << "Destructor called" << std::endl;
	return;
}

void	SampleStruct::bar( void ) const {

	std::cout << "Member function bar called" << std::endl;
	return;
}
