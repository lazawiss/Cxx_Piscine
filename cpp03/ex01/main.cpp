/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 12:16:59 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/05 20:54:35 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ){

	ClapTrap Bud( "Jacky" );
	ScavTrap Gal( "Aicha" );
	
	std::cout << '\n';
	std::cout << "ClapTrap " + Bud.getName() << " Hit level is " << Bud.getHit() << '\n';
	std::cout << "ClapTrap " + Bud.getName() << " Energy level is " <<  Bud.getEnergy() << '\n';
	std::cout << "ClapTrap " + Bud.getName() << " Damage level is " <<  Bud.getDamage() << '\n';
	std::cout << '\n';
	std::cout << "ScavTrap " + Gal.getName() << " Hit level is " << Gal.getHit() << '\n';
	std::cout << "ScavTrap " + Gal.getName() << " Energy level is " <<  Gal.getEnergy() << '\n';
	std::cout << "ScavTrap " + Gal.getName() << " Damage level is " <<  Gal.getDamage() << '\n';
	std::cout << '\n';
	

	Bud.attack( "Aicha" );
	Gal.attack( "Jacky" );
	Bud.takeDamage( Gal.getDamage() );
	Gal.takeDamage( Bud.getDamage());
	Bud.beRepaired(-8);
	Gal.beRepaired(0);

	std::cout << '\n';
	
	Gal.guardGate();
	
	std::cout << '\n';

	std::cout << "ClapTrap " + Bud.getName() << " Hit level is " << Bud.getHit() << '\n';
	std::cout << "ClapTrap " + Bud.getName() << " Energy level is " <<  Bud.getEnergy() << '\n';
	std::cout << "ClapTrap " + Bud.getName() << " Damage level is " <<  Bud.getDamage() << '\n';
	std::cout << '\n';
	std::cout << "ScavTrap " + Gal.getName() << " Hit level is " << Gal.getHit() << '\n';
	std::cout << "ScavTrap " + Gal.getName() << " Energy level is " <<  Gal.getEnergy() << '\n';
	std::cout << "ScavTrap " + Gal.getName() << " Damage level is " <<  Gal.getDamage() << '\n';
	std::cout << '\n';


	return 0;
}
