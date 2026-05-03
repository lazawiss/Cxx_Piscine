/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 21:09:22 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/07 18:19:18 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() {
	
	std::cout << "Constructor WrongCat called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal(src){
	
	std::cout << "Copy Constructor WrongCat called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat( void ){
	
	std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat &	WrongCat::operator=( WrongCat const & other ){
	
	std::cout << "Assignment Operator WrongCat called" << std::endl;
	if (this != &other)
		WrongAnimal::operator=(other) ;
	return *this;
	
}

void	WrongCat::makeSound( void ) const{

	std::cout << "Chirps chchchirps" << std::endl;

}