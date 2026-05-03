#include "Sample.hpp"

Sample::Sample( void ) : _fool( 0 ){

	std::cout << "Default COnstructor called" << std::endl;
	return;
}

Sample::Sample( int const n ) : _fool( n ){

	std::cout << "Parametric Constructor called" << std::endl;
	return;
}

Sample::Sample( Sample const & src ){

	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}

Sample::~Sample( void ){

	std::cout << "Destructor called" << std::endl;
	return;
}

int	Sample::getFool( void ) const{

	return this->_fool;
}

Sample &	Sample::operator=( Sample const & rhs ){

	std::cout << "Assignment operator called" << std::endl;

	if ( this != &rhs )
		this->_fool = rhs.getFool();
	
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Sample const & i){

	o << "The value of _fool is : " << i.getFool();
	return o;
}
