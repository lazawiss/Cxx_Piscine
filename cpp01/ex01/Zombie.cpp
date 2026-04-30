/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 19:39:45 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/19 14:09:28 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(  ) : _name("OG") {
	
	// std::cout << "Constructor " << this->_name << " called" << std::endl;
	return;
}

Zombie::~Zombie( void ) {

	// std::cout << "Destructor " << this->_name << " called" << std::endl;
	return;
}

void Zombie::announce( void ) const{
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

std::string Zombie::getName( void ) const{
	
	return this->_name;
}

void Zombie::setName( std::string name ) {
	this->_name = name;
}