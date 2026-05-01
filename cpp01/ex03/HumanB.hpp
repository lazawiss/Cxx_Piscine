/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:16:26 by lzannis           #+#    #+#             */
/*   Updated: 2026/05/01 16:55:26 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB {
	
private:
	
	std::string	_nameB;
	Weapon*		_WeaponPtr;
	
public:

			HumanB( std::string name );
			~HumanB( void );
	void	attack( void ) const;
	
	void	setWeapon( Weapon& club );
};