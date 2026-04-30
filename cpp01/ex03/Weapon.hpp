/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:05:07 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/19 18:05:17 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Weapon {

private:

	std::string	_type;
	
public:

				Weapon( std::string	type );
				~Weapon( void );
	std::string	getType( void ) const;
	void		setType( std::string str );

};
