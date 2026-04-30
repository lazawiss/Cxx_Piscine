/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:52:23 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/18 19:43:59 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {
	
	std::cout << "Constructor " << this->_name << " called" << std::endl;
	announce();
	return;
}

Zombie::~Zombie( void ) {

	std::cout << "Destructor " << this->_name << " called" << std::endl;
	return;
}

void Zombie::announce( void ) const{
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
