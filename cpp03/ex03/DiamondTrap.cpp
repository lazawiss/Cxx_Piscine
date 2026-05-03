/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 10:54:40 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/04 15:50:54 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_trap"), ScavTrap(name), FragTrap(name), _Name(name){
	
	std::cout << "Constructor DiamondTrap called\n";
	
	ClapTrap::_Name += "_clap_trap";
	this->FragTrap::getHit();
	this->ScavTrap::getEnergy();
	this->FragTrap::getDamage();
	return;
}

DiamondTrap::DiamondTrap( DiamondTrap  const & src ) : ScavTrap(src), FragTrap(src), ClapTrap(src) {
	
	std::cout << "Copy Constructor DiamondTrap called" << std::endl;
	*this = src;
	return;
}

DiamondTrap::~DiamondTrap( void ) {
	
	std::cout << "Destructor DiamondTrap called\n";

}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap  const & other){
	
	std::cout << "Assignment Operator DiamondTrap called\n";
	if (this != &other ){
		ClapTrap::operator=(other);
		ScavTrap::operator=(other);
        FragTrap::operator=(other);
        _Name = other._Name;
	}
		
	return *this;
}

std::string	DiamondTrap::getName( void ) const{

	return this->_Name;
}

void	DiamondTrap::whoAmI( void ){

	std::cout << "I am DiamondTrap " + this->_Name << " and not ClapTrap " << ClapTrap::_Name << '\n';

}