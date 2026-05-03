/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 22:25:43 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/28 21:35:44 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _n( 0 ) {
	
	std::cout << "Default Constructor called" << '\n';
	return;
}

// = n * 2^bits : move bit to left. 2^8 = 256
// set from int to fixed number
Fixed::Fixed( int const n ) {
	
	std::cout << "Int Constructor called" << '\n';
	this->_n = n * (1 << _bits);// = n * 2^bits
	return;
}

// set from float to fixed number
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

// set it back to float from fixed number
float	Fixed::toFloat( void ) const{

	return float(this->_n) / float(1 << _bits);
}

// set it back to int from fixed number
int		Fixed::toInt( void ) const{
	
	return this->_n / (1 << _bits);
}

//comparisons
bool	Fixed::operator>( Fixed const & rhs ) {

	return ( this->getRawBits() > rhs.getRawBits() );
}

bool	Fixed::operator<( Fixed const & rhs ) {
	
	return ( this->getRawBits() < rhs.getRawBits() );
}

bool	Fixed::operator>=( Fixed const & rhs ){

	return ( this->getRawBits() >= rhs.getRawBits() );
}

bool	Fixed::operator<=( Fixed const & rhs ){
	
	return ( this->getRawBits() <= rhs.getRawBits() );
}

bool	Fixed::operator==( Fixed const & rhs ){
	
	return ( this->getRawBits() == rhs.getRawBits() );
}

bool	Fixed::operator!=( Fixed const & rhs ){

	return ( this->getRawBits() != rhs.getRawBits() );
}

//operations
Fixed	Fixed::operator+( Fixed const & rhs ) const{

	Fixed copy(*this);
	int res = this->_n + rhs.getRawBits();
	copy.setRawBits(res);
	return copy;
}

Fixed	Fixed::operator-( Fixed const & rhs ) const{
	
	Fixed copy(*this);
	int res = this->_n - rhs.getRawBits();
	copy.setRawBits(res);
	return copy;
}

Fixed	Fixed::operator*( Fixed const & rhs ) const{

	Fixed copy(*this);
	int res = this->_n * rhs.getRawBits();
	int newres = res / (1 << _bits);
	copy.setRawBits(newres);
 	return copy;
}

Fixed	Fixed::operator/( Fixed const & rhs ) const{
	
	return Fixed(this->toFloat() / rhs.toFloat()); 
}

//increment/decrement
Fixed &	Fixed::operator++( void ){
	
	this->_n++;
	
	return *this;
}

Fixed	Fixed::operator++(int){

	Fixed old = *this;
	operator++();
	
	return old;
}

Fixed &	Fixed::operator--( void ){

	this->_n--;
	
	return *this;
}

Fixed	Fixed::operator--(int){
	
	Fixed old = *this;
	operator--();
	
	return old;
}

//min/max
Fixed &	Fixed::min( Fixed & a, Fixed & b ){
	
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

const Fixed &	Fixed::min( Fixed const & a, Fixed const & b ){

	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed &	Fixed::max( Fixed & a, Fixed & b ){
	
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed &	Fixed::max( Fixed const & a, Fixed const & b ){
	
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

const int Fixed::_bits = 8;

std::ostream &	operator<<( std::ostream  & o, Fixed const & i ) {

	o << i.toFloat();
	return o;
}
