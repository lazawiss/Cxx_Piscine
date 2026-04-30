/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:16:26 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/21 14:28:50 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB {
	
private:
	
	Weapon*		_WeaponPtr;
	std::string	_nameB;
	
public:

			HumanB( std::string name );
			~HumanB( void );
	void	attack( void ) const;
	
	void	setWeapon( Weapon& club );
};