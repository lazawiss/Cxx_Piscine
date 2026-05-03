/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:11:00 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/08 20:09:24 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( ){
	
	std::cout << "Constructor Animal called" << std::endl;
	_type = "Animal";
}

Animal::Animal( Animal const & src ){
	
	std::cout << "Copy Constructor Animal called" << std::endl;
	*this = src;
}

Animal::~Animal( void ) {
	
	std::cout << "Destructor Animal called" << std::endl;
}

Animal & Animal::operator=( Animal const & other ) {
	
	std::cout << "Assignment Operator Animal called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

std::string	Animal::getType( void ) const{
	
	return this->_type;
}

void	Animal::makeSound( void ) const{
	
	std::cout << "Animal noises" << std::endl;
}