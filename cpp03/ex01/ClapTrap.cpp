/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 11:55:04 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/05 21:03:45 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <bits/stdc++.h>

ClapTrap::ClapTrap( std::string name ) : _Name(name), _Hit(10), _Energy(10), _Damage(0) {
	
	std::cout << "Constructor ClapTrap called\n";
}

ClapTrap::ClapTrap( ClapTrap const & src ){

	std::cout << "Copy Constructor ClapTrap called\n";
	*this = src;
	return;
}

ClapTrap::~ClapTrap( void ){
	
	std::cout << "Destructor ClapTrap called\n";
}

ClapTrap & ClapTrap::operator=( ClapTrap const & other ){
	
	std::cout << "Assignment Operator ClapTrap called\n";
		if (this != &other )
		*this = other;
		
	return *this;
}

void	ClapTrap::attack( const std::string & target ){
	
	std::cout << "ClapTrap " + this->_Name + " attacks " + target;
	std::cout << " causing " << this->_Damage << " points of damage!" << '\n';
	this->_Energy--;

}

void	ClapTrap::takeDamage( unsigned int amount ){
	
	if (amount < 0){

		std::cout << "The amount of points must be positiv\n";
		exit (1);
	}
	std::cout << "ClapTrap " + this->_Name + " has lost ";
	std::cout << amount << " points of health!\n";
	this->_Hit -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount ){

	if (amount < 0){

		std::cout << "The amount of points must be positiv\n";
		exit (1);
	}
	if ( amount == 0){
		
		std::cout << "ClapTrap " + this->_Name + " doesn't need any repair!\n";
		this->_Energy--;
		return;
	}
	std::cout << "ClapTrap " + this->_Name + " has regained ";
	std::cout << amount << " points of health!\n";
	this->_Hit += amount;
	this->_Energy--;
}

std::string	ClapTrap::getName( void ) const{

	return this->_Name;
}

int		ClapTrap::getHit( void ) const{

	return this->_Hit;
}

int		ClapTrap::getEnergy( void ) const{
	
	return this->_Energy;
}

int		ClapTrap::getDamage( void ) const{
	
	return this->_Damage;
}

void		ClapTrap::setName( std:: string name ){
	
	this->_Name = name;
	return;
}

void		ClapTrap::setHit( int hit ){
	
	this->_Hit = hit;
	return;
}
void		ClapTrap::setEnergy( int energy ){

	this->_Energy = energy;
	return;
}

void		ClapTrap::setDamage( int damage ){

	this->_Damage = damage;
	return;
}
