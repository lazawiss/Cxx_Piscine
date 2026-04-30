/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:29:06 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/18 21:18:32 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void ) {
	
	Zombie Dead( "Anna" );
	
	Zombie* Bod = Dead.newZombie( "Gerard" ) ;

	Dead.randomChump( "Rando" );

	delete Bod;
	
	return 0;
}
