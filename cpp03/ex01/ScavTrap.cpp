/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 11:54:35 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/04 16:17:30 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name){

	std::cout << "Constructor ScavTrap called\n";
	this->setName(name);
	this->setHit(100);
	this->setEnergy(50);
	this->setDamage(20);
	return;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src){
	
	std::cout << "Copy Constructor ScavTrap called" << std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap( void ){
	
	std::cout << "Destructor ScavTrap called\n";
}

ScavTrap & ScavTrap::operator=( ScavTrap const & other){
	
	std::cout << "Assignment Operator ScavTrap called\n";
	if (this != &other )
		ClapTrap::operator=(other);
		
	return *this;
}

void	ScavTrap::attack( const std::string & target ){
	
	std::cout << "ScavTrap " + this->_Name + " attacks " + target;
	std::cout << " causing " << this->_Damage << " points of damage!" << '\n';
	this->_Energy--;
}

void	ScavTrap::guardGate( void ){
	
	std::cout << "ScavTrap " + this->getName() << " has entered GateKeeping MODE\n";
}