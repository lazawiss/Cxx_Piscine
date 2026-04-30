/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:25:31 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/19 18:10:55 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string	type ) : _type(type) {

	std::cout << "Constructor Weapon" << std::endl;
	return;
}

Weapon::~Weapon( void ) {
	
	std::cout << "Destructor Weapon" << std::endl;
	return;
}

std::string	Weapon::getType( void ) const{
	
	return this->_type;	
}

void	Weapon::setType( std::string str){

	this->_type = str;
	return;
}
