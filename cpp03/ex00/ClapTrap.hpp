/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 18:28:19 by lzannis           #+#    #+#             */
/*   Updated: 2026/05/03 15:19:36 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap {

private:

	std::string _Name;
	int			_Hit;
	int			_Energy;
	int			_Damage;
	
public:

				ClapTrap( std::string name );
				ClapTrap( ClapTrap const & );
				~ClapTrap( void );
		
	ClapTrap &	operator=( ClapTrap const & src);
	
	void		attack( const std::string & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );

	void		getHit( void ) const;
	void		getEnergy( void ) const;
	void		getDamage( void ) const;
};
