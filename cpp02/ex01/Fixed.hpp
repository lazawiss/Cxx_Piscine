/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 20:16:36 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/27 19:29:50 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {

private:

	static const int	_bits;
	int					_n;
	
public:
	
			Fixed( void );
			Fixed( int const n );
			Fixed( float const f );
			Fixed( Fixed const & src);
			~Fixed( void );
	
	Fixed &	operator=( Fixed const & rhs);
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i);
