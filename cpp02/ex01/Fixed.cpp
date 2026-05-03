/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 20:17:15 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/27 22:18:09 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _n( 0 ) {
	
	std::cout << "Default Constructor called" << '\n';
	return;
}

Fixed::Fixed( int const n ) {
	
	std::cout << "Int Constructor called" << '\n';
	this->_n = n * (1 << _bits);
	return;
}

Fixed::Fixed( float const f ) {
	
	std::cout << "Float Constructor called" << '\n';
	float newf = f * (1 << _bits);
	float roundedF = roundf(newf);
	this->_n = int(roundedF);
	return;
}

Fixed::Fixed( Fixed const & src) {

	std::cout << "Copy Constructor called" << '\n';
	*this = src;
	
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
	
	return this->_n;
}

void	Fixed::setRawBits( int const raw ) {
	
	this->_n = raw;
	return;
}

float	Fixed::toFloat( void ) const{

	return float(this->_n) / float(1 << _bits);
}

int		Fixed::toInt( void ) const{
	
	return this->_n / (1 << _bits);
}

const int Fixed::_bits = 8;

std::ostream &	operator<<( std::ostream  & o, Fixed const & i ) {

	o << i.toFloat();
	return o;
}
