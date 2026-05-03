#include "sample_class_foo.hpp"

Samplefoo::Samplefoo( void ) {

	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->_private_Foo = 0;
	std::cout << "this->_private_Foo: " << this->_private_Foo << std::endl;

	this->publicBar();
	this->_private_Bar();

	return;
}

Samplefoo::~Samplefoo( void ) {

	std::cout << "Destructor called" << std::endl;
	return;
}

void	Samplefoo::publicBar( void ) const {

	std::cout << "Member function publicBar called" << std::endl;
	return;
}

void	Samplefoo::_private_Bar( void ) const {

	std::cout << "Member function _privateBar called" << std::endl;
	return;
}