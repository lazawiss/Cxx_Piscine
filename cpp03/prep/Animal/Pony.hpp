#pragma once
#include "Animal.hpp"
#include <iostream>
#include <string>

class Pony : public Animal {

public:

	Pony();
	Pony( Pony const & );
	Pony& operator=( Pony const &);
	~Pony();

	void	doMagic( std::string const & target );
	void	run( int distance );
};
 