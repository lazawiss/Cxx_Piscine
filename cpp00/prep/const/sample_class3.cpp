#include "sample_class3.hpp"

Sample3::Sample3( float const f ) : pi( f ), qd( 42 ) {

	std::cout << "Constructor called" << std::endl;
	return;
}

Sample3::~Sample3( void ) {

	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample3::bar( void ) const {

	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	this->qd = 0;

	return;
}
