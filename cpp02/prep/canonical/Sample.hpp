#pragma once

#include <iostream>

class Sample {

private:

	int	_fool;
public:

	Sample( void );//Canonical : Constructor par default
	Sample( int const n );
	Sample( Sample const & rhs );//Canonical : Constructor par copie 
	~Sample( void );//Canonical : Destructor

	Sample &	operator=( Sample const & rhs );//Canonical : Operator d'assignation : mise a jour de la classe

	int	getFool( void ) const;
};

std::ostream &	operator<<( std::ostream & o, Sample const & i);