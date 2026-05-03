/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 10:49:06 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/04 15:45:04 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

private:
	
	std::string		_Name;

public:
	
					DiamondTrap( std::string name );
					DiamondTrap( DiamondTrap  const & src );
					~DiamondTrap( void );

	DiamondTrap &	operator=( DiamondTrap  const & other);
	
	std::string		getName( void ) const;
	
	void			whoAmI( void );
	
};



