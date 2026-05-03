/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 18:51:01 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/03 11:44:28 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {

	ClapTrap Bud( "Jacky" );
	
	std::cout << '\n';
	Bud.getHit();
	Bud.getEnergy();
	Bud.getDamage();
	std::cout << '\n';

	Bud.attack( "new guy " );
	Bud.takeDamage(6);
	Bud.beRepaired(8);
	std::cout << '\n';

	Bud.getHit();
	Bud.getEnergy();
	Bud.getDamage();
	std::cout << '\n';

	return 0;
}