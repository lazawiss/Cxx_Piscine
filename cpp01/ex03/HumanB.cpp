/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:20:41 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/21 14:23:09 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _nameB(name), _WeaponPtr(NULL){
	
	std::cout << "Constructor HumanB called" << std::endl;
	return;
}

HumanB::~HumanB( void ){
	
	std::cout << "Destructor HumanB called" << std::endl;
	return;
}

void	HumanB::attack( void ) const{
	
	std::cout << this->_nameB << " attacks with their " << _WeaponPtr->getType() << std::endl;
	return;
}

void	HumanB::setWeapon( Weapon& club ){
	
	_WeaponPtr = &club;
	return;
}