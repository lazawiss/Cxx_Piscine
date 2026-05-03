/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:11:32 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/08 20:18:03 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() {
	
	std::cout << "Constructor Dog called" << std::endl;
	this->_type = "Dog";
	this->DogBrain = new Brain();
}

Dog::Dog( Dog const & src ) : Animal(src), DogBrain(new Brain()){
	
	std::cout << "Copy Constructor Dog called" << std::endl;
}

Dog::~Dog( void ){

	if (this->DogBrain)
		delete DogBrain;
	std::cout << "Destructor Dog called" << std::endl;
}

Dog & Dog::operator=( Dog const & other ){

	std::cout << "Assignment Operator Dog called" << std::endl;
	if (this != &other){
		Animal::operator=(other);
		if (DogBrain)
			delete DogBrain;
		DogBrain = new Brain();
	}
	return *this;
}

void	Dog::makeSound( void ) const{
	
	std::cout << "WOOF WOOF" << std::endl;
}

Brain*	Dog::getBrain() const{
	
	return this->DogBrain;
}
