/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 22:25:07 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/28 21:33:16 by lzannis          ###   ########.fr       */
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
							Fixed( Fixed const & src );
							~Fixed( void );
					
	Fixed &					operator=( Fixed const & rhs );
	
	//comparisons
	bool					operator>( Fixed const & rhs );
	bool					operator<( Fixed const & rhs );
	bool					operator>=( Fixed const & rhs );
	bool					operator<=( Fixed const & rhs );
	bool					operator==( Fixed const & rhs);
	bool					operator!=( Fixed const & rhs);
					
	Fixed					operator+( Fixed const & rhs ) const;
	Fixed					operator-( Fixed const & rhs ) const;
	Fixed					operator*( Fixed const & rhs ) const;
	Fixed					operator/( Fixed const & rhs ) const;
				
	Fixed &					operator++( void );
	Fixed					operator++(int);
	Fixed &					operator--( void );
	Fixed					operator--(int);

	static Fixed & 			min( Fixed & a, Fixed & b );
	static const Fixed &	min( Fixed const & a, Fixed const & b );
	static Fixed & 			max( Fixed & a, Fixed & b );
	static const Fixed &	max( Fixed const & a, Fixed const & b );
	
	int						getRawBits( void ) const;
	void					setRawBits( int const raw );
					
	float					toFloat( void ) const;
	int						toInt( void ) const;
};

std::ostream & 				operator<<( std::ostream & o, Fixed const & i);
