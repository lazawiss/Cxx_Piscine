/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 20:51:13 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/03 21:07:08 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ){

	ClapTrap Bud( "Jacky" );
	ScavTrap Gal( "Aicha" );
	FragTrap Baddie( "Clothilde" );
	
	std::cout << '\n';
	std::cout << "ClapTrap " + Bud.getName() << " Hit level is " << Bud.getHit() << '\n';
	std::cout << "ClapTrap " + Bud.getName() << " Energy level is " <<  Bud.getEnergy() << '\n';
	std::cout << "ClapTrap " + Bud.getName() << " Damage level is " <<  Bud.getDamage() << '\n';
	std::cout << '\n';
	std::cout << "ScavTrap " + Gal.getName() << " Hit level is " << Gal.getHit() << '\n';
	std::cout << "ScavTrap " + Gal.getName() << " Energy level is " <<  Gal.getEnergy() << '\n';
	std::cout << "ScavTrap " + Gal.getName() << " Damage level is " <<  Gal.getDamage() << '\n';
	std::cout << '\n';
	std::cout << "FragTrap " + Baddie.getName() << " Hit level is " << Baddie.getHit() << '\n';
	std::cout << "FragTrap " + Baddie.getName() << " Energy level is " <<  Baddie.getEnergy() << '\n';
	std::cout << "FragTrap " + Baddie.getName() << " Damage level is " <<  Baddie.getDamage() << '\n';
	std::cout << '\n';

	Bud.attack( Gal.getName() );
	Gal.attack( Bud.getName() );
	std::cout << '\n';

	Bud.takeDamage( Gal.getDamage() );
	Gal.takeDamage( Bud.getDamage() );
	std::cout << '\n';

	Bud.beRepaired(8);
	Gal.beRepaired(0);
	std::cout << '\n';

	Bud.attack( Baddie.getName() );
	Baddie.takeDamage( Bud.getDamage() );
	Baddie.beRepaired(0);
	
	std::cout << '\n';
	
	Gal.guardGate();
	
	std::cout << '\n';
	
	Baddie.highFivesGuys();
	std::cout << '\n';
	

	std::cout << "ClapTrap " + Bud.getName() << " Hit level is " << Bud.getHit() << '\n';
	std::cout << "ClapTrap " + Bud.getName() << " Energy level is " <<  Bud.getEnergy() << '\n';
	std::cout << "ClapTrap " + Bud.getName() << " Damage level is " <<  Bud.getDamage() << '\n';
	std::cout << '\n';
	std::cout << "ScavTrap " + Gal.getName() << " Hit level is " << Gal.getHit() << '\n';
	std::cout << "ScavTrap " + Gal.getName() << " Energy level is " <<  Gal.getEnergy() << '\n';
	std::cout << "ScavTrap " + Gal.getName() << " Damage level is " <<  Gal.getDamage() << '\n';
	std::cout << '\n';
	std::cout << "FragTrap " + Baddie.getName() << " Hit level is " << Baddie.getHit() << '\n';
	std::cout << "FragTrap " + Baddie.getName() << " Energy level is " <<  Baddie.getEnergy() << '\n';
	std::cout << "FragTrap " + Baddie.getName() << " Damage level is " <<  Baddie.getDamage() << '\n';
	std::cout << '\n';

	return 0;
}
