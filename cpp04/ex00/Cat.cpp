/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:12:08 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/07 18:17:16 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() {
	
	std::cout << "Constructor Cat called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat( Cat const & src ) : Animal(src){
	
	std::cout << "Copy Constructor Cat called" << std::endl;
	*this = src;
}

Cat::~Cat( void ){
	
	std::cout << "Destructor Cat called" << std::endl;
}

Cat &	Cat::operator=( Cat const & other ){
	
	std::cout << "Assignment Operator Cat called" << std::endl;
	if (this != &other)
		Animal::operator=(other) ;
	return *this;
	
}

void	Cat::makeSound( void ) const{

	std::cout << "Meooooww Meeeaow" << std::endl;

}