/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 20:51:13 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/04 16:16:08 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ){

	ClapTrap Bud( "Jacky" );
	DiamondTrap Last( "Marina" );
	
	std::cout << '\n';
	std::cout << "ClapTrap " + Bud.getName() << " Hit level is " << Bud.getHit() << '\n';
	std::cout << "ClapTrap " + Bud.getName() << " Energy level is " <<  Bud.getEnergy() << '\n';
	std::cout << "ClapTrap " + Bud.getName() << " Damage level is " <<  Bud.getDamage() << '\n';
	std::cout << '\n';
	std::cout << "DiamondTrap " + Last.getName() << " Hit level is " << Last.getHit() << '\n';
	std::cout << "DiamondTrap " + Last.getName() << " Energy level is " <<  Last.getEnergy() << '\n';
	std::cout << "DiamondTrap " + Last.getName() << " Damage level is " <<  Last.getDamage() << '\n';
	std::cout << '\n';


	Bud.attack( Last.getName() );
	Last.ScavTrap::attack( Bud.getName() );
	Bud.takeDamage( Last.getDamage() );
	Last.takeDamage( Bud.getDamage() );
	Bud.beRepaired(8);
	Last.beRepaired(0);
	
	std::cout << '\n';
	
	Last.guardGate();
	std::cout << '\n';
	
	Last.highFivesGuys();
	std::cout << '\n';

	Last.whoAmI();
	std::cout << '\n';

	std::cout << "ClapTrap " + Bud.getName() << " Hit level is " << Bud.getHit() << '\n';
	std::cout << "ClapTrap " + Bud.getName() << " Energy level is " <<  Bud.getEnergy() << '\n';
	std::cout << "ClapTrap " + Bud.getName() << " Damage level is " <<  Bud.getDamage() << '\n';
	std::cout << '\n';
	std::cout << "DiamondTrap " + Last.getName() << " Hit level is " << Last.getHit() << '\n';
	std::cout << "DiamondTrap " + Last.getName() << " Energy level is " <<  Last.getEnergy() << '\n';
	std::cout << "DiamondTrap " + Last.getName() << " Damage level is " <<  Last.getDamage() << '\n';
	std::cout << '\n';

	return 0;
}
