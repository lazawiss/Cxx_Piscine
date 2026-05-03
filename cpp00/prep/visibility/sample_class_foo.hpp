#ifndef SAMPLE_CLASS_FOO_HPP
# define SAMPLE_CLASS_FOO_HPP

#include <iostream>

class Samplefoo {

public:

	int	publicFoo;

	Samplefoo( void );
	~Samplefoo( void );

	void	publicBar( void ) const;

private:

	int	_private_Foo;

	void	_private_Bar( void ) const;	

};

#endif
