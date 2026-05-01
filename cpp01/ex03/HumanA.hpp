/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:11:43 by lzannis           #+#    #+#             */
/*   Updated: 2026/05/01 16:54:56 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include  "Weapon.hpp"

class Weapon;

class	HumanA {
	
private:
	
	std::string	_nameA;
	Weapon&		_WeaponRef;
	
public:

			HumanA( std::string	name, Weapon& club );
			~HumanA( void );
	void	attack( void );

};
