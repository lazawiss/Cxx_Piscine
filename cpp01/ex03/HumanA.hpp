/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:11:43 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/21 13:24:14 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include  "Weapon.hpp"

class	HumanA {
	
private:
	
	Weapon&		_WeaponRef;
	std::string	_nameA;
	
public:

			HumanA( std::string	name, Weapon& club );
			~HumanA( void );
	void	attack( void  ) ;

};
