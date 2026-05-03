/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 20:39:25 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/04 12:57:40 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap( std::string name) : ClapTrap(name){
	
	std::cout << "Constructor FragTrap called\n";
	this->setName(name);
	this->setHit(100);
	this->setEnergy(100);
	this->setDamage(30);
	return;
}

FragTrap::FragTrap( FragTrap const & src) : ClapTrap(src){
	
	std::cout << "Copy Constructor FragTrap called" << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap( void ){
	
	std::cout << "Destructor FragTrap called\n";

}

FragTrap &	FragTrap::operator=( FragTrap const & other ){
	
	std::cout << "Assignment Operator FragTrap called\n";
	if (this != &other )
		ClapTrap::operator=(other);
		
	return *this;
}

void		FragTrap::highFivesGuys( void ){
	
	std::cout << "FragTrap " + this->getName() << " is giving her friend a high five\n";
}