/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 19:39:45 by lzannis           #+#    #+#             */
/*   Updated: 2026/05/01 16:34:46 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(  ) : _name("OG") {
	
}

Zombie::~Zombie( void ) {

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