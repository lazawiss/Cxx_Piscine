/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 19:38:37 by lzannis           #+#    #+#             */
/*   Updated: 2026/05/01 16:40:29 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	
	int N = 3;
	Zombie og;
	og.setName("OG");
	og.announce();
	Zombie* horde = og.zombieHorde( N, "babiZombie" );

	delete [] horde;

	return 0;
}
