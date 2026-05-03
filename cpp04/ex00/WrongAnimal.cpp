/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:07:38 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/07 18:18:45 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	
	std::cout << "Constructor WrongAnimal called" << std::endl;
	_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ){
	
	std::cout << "Copy Constructor WrongAnimal called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal( void ) {
	
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & other ) {
	
	std::cout << "Assignment Operator WrongAnimal called" << std::endl;
	if (this != &other)
		*this = other;
	return *this;
}

std::string	WrongAnimal::getType( void ) const{
	
	return this->_type;
}

void	WrongAnimal::makeSound( void ) const{
	
	std::cout << "WrongAnimal noises" << std::endl;
}
