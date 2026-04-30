/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 19:39:21 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/19 13:05:31 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie {

private:
	
	std::string	_name;

public:

				Zombie(  );
				~Zombie( void );
	void		announce( void ) const;

	std::string getName( void ) const;
	
	void 		setName( std::string name );
	
	Zombie* 	zombieHorde(  int N, std::string name );

};
