/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 19:40:47 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/19 14:07:45 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(  int N, std::string name ) {
	
	Zombie* newZombie = new Zombie[N];
	for(int i = 0; i < N; i++){
		newZombie[i].setName( name );	
		// std::cout << "Constructor " << newZombie[i].getName() << " called" << std::endl;
		newZombie[i].announce();		
	}
	
	return newZombie;
}