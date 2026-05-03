/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:12:08 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/08 20:17:03 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() {
	
	std::cout << "Constructor Cat called" << std::endl;
	this->_type = "Cat";
	this->CatBrain = new Brain();
}

Cat::Cat( Cat const & src ) : Animal(src), CatBrain(new Brain()){
	
	std::cout << "Copy Constructor Cat called" << std::endl;
}

Cat::~Cat( void ){
	
	if (this->CatBrain)
		delete CatBrain;
	std::cout << "Destructor Cat called" << std::endl;
}

Cat &	Cat::operator=( Cat const & other ){
	
	std::cout << "Assignment Operator Cat called" << std::endl;
	if (this != &other){
		Animal::operator=(other);
		if (this->CatBrain)
			delete CatBrain;
		CatBrain = new Brain();
	}
	return *this;
}

void	Cat::makeSound( void ) const{

	std::cout << "Meooooww Meeeaow" << std::endl;

}

Brain*	Cat::getBrain() const{

	return this->CatBrain;
}
