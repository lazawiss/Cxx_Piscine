/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:20:14 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/26 20:09:11 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {

private:

	int	_n;
	static const int _bits;
	
public:
	
			Fixed( void );
			Fixed( Fixed const & src);
			~Fixed( void );
	
	Fixed &	operator=( Fixed const & rhs);
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	
};

std::ostream & operator<<( std::ostream & o, Fixed const i);
