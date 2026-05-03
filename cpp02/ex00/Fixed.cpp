/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 20:09:28 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/26 20:45:24 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _n( 0 ){
	
	std::cout << "Default Constructor called" << '\n';
	return;
}

Fixed::Fixed( Fixed const & src) {

	std::cout << "Copy Constructor called" << '\n';
	this->_n = src.getRawBits();
	
	return;
}

Fixed::~Fixed( void ) {
	
	std::cout << "Destructor called" << '\n';
	return;
}

Fixed &	Fixed::operator=( Fixed const & rhs) {
	
	std::cout << "Copy assignment operator called" << '\n';
	
	if (this != &rhs)
		this->_n = rhs.getRawBits();

	return *this;
}

int	Fixed::getRawBits( void ) const{
	
	std::cout << "getRawBits member function called" << '\n';
	return this->_n;
}

void	Fixed::setRawBits( int const raw ) {
	
	this->_n = raw;
	return;
}

const int Fixed::_bits = 8;

std::ostream &	operator<<( std::ostream  & o, Fixed const & i ) {

	o << i.getRawBits();
	
	return o;
}
