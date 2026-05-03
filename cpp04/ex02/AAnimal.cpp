/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 22:06:41 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/08 22:06:42 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

AAnimal::AAnimal( ){
	
	std::cout << "Constructor AAnimal called" << std::endl;
	_type = "AAnimal";
}

AAnimal::AAnimal( AAnimal const & src ){
	
	std::cout << "Copy Constructor AAnimal called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal( void ) {
	
	std::cout << "Destructor AAnimal called" << std::endl;
}

AAnimal & AAnimal::operator=( AAnimal const & other ) {
	
	std::cout << "Assignment Operator AAnimal called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

std::string	AAnimal::getType( void ) const{
	
	return this->_type;
}
