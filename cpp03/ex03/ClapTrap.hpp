/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 20:54:23 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/03 20:54:28 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap {

protected:

	std::string _Name;
	int			_Hit;
	int			_Energy;
	int			_Damage;
	
public:

				ClapTrap( std::string name );
				ClapTrap( ClapTrap const & );
				~ClapTrap( void );
			
				ClapTrap & operator=( ClapTrap const & other);
		
	void		attack( const std::string & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );
	
	std::string	getName( void ) const;
	int			getHit( void ) const;
	int			getEnergy( void ) const;
	int			getDamage( void ) const;

	void		setName( std:: string name );
	void		setHit( int hit );
	void		setEnergy( int energy );
	void		setDamage( int damage );
	
};
