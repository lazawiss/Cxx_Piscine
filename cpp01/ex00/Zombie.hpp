/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:44:07 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/18 19:17:51 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>


class Zombie {

private:
	
	std::string	_name;

public:

			Zombie( std::string name );
			~Zombie( void );
	void	announce( void ) const;
	
	Zombie* newZombie( std::string name );

	void	randomChump( std::string name );

};
