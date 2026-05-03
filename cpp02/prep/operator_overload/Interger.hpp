#pragma once

#include <iostream>

class Integer {

private:

		int	_n;
public:

		Integer( int const n );
		~Integer( void );

		int	getValue( void ) const;

		Integer &	operator=( Integer const & rhs );//renvoie reference sur l'instance courante
		Integer		operator+( Integer const & rhs ) const;

};

std::ostream & operator<<( std::ostream & o, Integer const & rhs );//surcharge de fonction
