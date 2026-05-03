/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 18:29:29 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/03 12:10:06 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _Name(name), _Hit(10), _Energy(10), _Damage(0) {
	
	std::cout << "Constructor ClapTrap called\n";
}

ClapTrap::ClapTrap( ClapTrap const & ){

	std::cout << "Copy Constructor ClapTrap called\n";
}

ClapTrap::~ClapTrap( void ){
	
	std::cout << "Destructor ClapTrap called\n";
}

ClapTrap & ClapTrap::operator=( ClapTrap const & src){
	
	std::cout << "Assignment Operator ClapTrap called\n";
	
	*this = src;
	return *this;
}

void	ClapTrap::attack( const std::string & target ){
	
	std::cout << "ClapTrap " + this->_Name + " attacks " + target;
	std::cout << "causing " << this->_Damage << " points of damage!" << '\n';
	this->_Energy--;

}

void	ClapTrap::takeDamage( unsigned int amount ){
	
	std::cout << "ClapTrap " + this->_Name + " has lost ";
	std::cout << amount << " points of health!\n";
	this->_Hit -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount ){

	std::cout << "ClapTrap " + this->_Name + "has regained ";
	std::cout << amount << " points of health!\n";
	this->_Hit += amount;
	this->_Energy--;
}

void		ClapTrap::getHit( void ) const{

	std::cout << "ClapTrap " + this->_Name << " Hit level is " << this->_Hit << '\n';
	return;
}

void		ClapTrap::getEnergy( void ) const{
	
	std::cout << "ClapTrap " + this->_Name << " Energy level is " << this->_Energy << '\n';
	return;
}

void		ClapTrap::getDamage( void ) const{
	
	std::cout << "ClapTrap " + this->_Name << " Damage level is " << this->_Damage << '\n';
	return;
}
