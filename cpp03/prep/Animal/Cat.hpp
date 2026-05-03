#pragma once
#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {

public:

	Cat();
	Cat( Cat const & );
	Cat& operator=( Cat const & );
	~Cat();

	void	scornSomeone( std::string const & target );

};

