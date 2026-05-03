/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 17:20:49 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/11 19:58:21 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	
	std::cout << "Constructor Brain called" << std::endl;
	for (int i = 0; i < 100; i++){	
		_ideas[i] = "";
	}
}

Brain::Brain( Brain const & src ){
	
	std::cout << "Copy Constructor Brain called" << std::endl;
	*this = src;

}

Brain::~Brain( void ){

	std::cout << "Destructor Brain called" << std::endl;
	
}

Brain &	Brain::operator=( Brain const & other ){

	std::cout << "Assignment Operator Brain called" << std::endl;
	if (this != &other){
		for (int i = 0; i < 100; i++){
				_ideas[i] = other._ideas[i];
		}
	}

	return *this;
}

std::string	Brain::getIdea( int i ) const{
	
	return this->_ideas[i];
}

void	Brain::setIdea( std::string idea, int i ){
	
	this->_ideas[i] = idea;
}
