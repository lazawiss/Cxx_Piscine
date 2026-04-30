/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:11:12 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/21 13:23:31 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& club ) : _nameA(name),  _WeaponRef(club){
	
	std::cout << "Constructor HumanA called" << std::endl;
	return;
}

HumanA::~HumanA( void ){
	
	std::cout << "Destructor HumanA called" << std::endl;
	return;
}

void	HumanA::attack( void ) {
	
	std::cout << this->_nameA << " attacks with their "\
	<< _WeaponRef.getType() << std::endl;
	return;
}
