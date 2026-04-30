/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 19:38:37 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/19 12:54:13 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	
	int N = 3;
	Zombie og;
	og.setName("OG");
	Zombie* horde = og.zombieHorde( N, "babiZombie" );
	// for(int i = 0; i < N; i++){
	// 	delete horde[i];		
	// }
	delete [] horde;

	return 0;
}
