/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:11:32 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/07 18:18:01 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() {
	
	std::cout << "Constructor Dog called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog( Dog const & src ) : Animal(src){
	
	std::cout << "Copy Constructor Dog called" << std::endl;
	*this = src;
}

Dog::~Dog( void ){

	std::cout << "Destructor Dog called" << std::endl;
}

Dog & Dog::operator=( Dog const & other ){

	std::cout << "Assignment Operator Dog called" << std::endl;
	if (this != &other)
		Animal::operator=(other) ;
	return *this;
}

void	Dog::makeSound( void ) const{
	
	std::cout << "WOOF WOOF" << std::endl;
}
