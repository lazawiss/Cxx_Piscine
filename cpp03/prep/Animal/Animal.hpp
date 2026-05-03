#pragma once 

#include <iostream>
#include <string>

class Animal {

private:

	int	_numberOfLegs;
public:

	Animal();
	Animal( Animal const & );
	Animal& operateur=( Animal const & );
	~Animal();

	void	run( int distance );
	void	call();
	void	eat( std::string & what );
	void	walk( int distance );
};
