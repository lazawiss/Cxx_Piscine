#ifndef SAMPLE_STRUCT_HPP
# define SAMPLE_STRUCT_HPP

#include <iostream>

struct	SampleStruct {

	int	foo;

	SampleStruct( void );
	~SampleStruct( void );

	void	bar( void) const;
};

#endif