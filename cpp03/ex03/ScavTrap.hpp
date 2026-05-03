/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 20:54:44 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/04 10:48:42 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : virtual public ClapTrap{

public:

				ScavTrap( std::string name );
				ScavTrap( ScavTrap const & );
				~ScavTrap( void );

	ScavTrap & operator=( ScavTrap const & other);

	void		attack( const std::string & target );
	void		guardGate( void );

};