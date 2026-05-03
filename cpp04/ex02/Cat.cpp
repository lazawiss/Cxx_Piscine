/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:12:08 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/11 20:05:39 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() {
	
	std::cout << "Constructor Cat called" << std::endl;
	this->_type = "Cat";
	this->CatBrain = new Brain();
}

Cat::Cat( Cat const & src ) : AAnimal(src), CatBrain(new Brain()){
	
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
		AAnimal::operator=(other);
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
