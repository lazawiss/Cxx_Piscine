#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>

class Sample {

private:
	
	int	_foo;

public:

	Sample( int v );
	~Sample( void );

	int	getFoo( void ) const;
	int	compare( Sample * other ) const;
};
#endif
