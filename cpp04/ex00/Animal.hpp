/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 20:04:27 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/11 19:48:01 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal {

protected:
	
	std::string		_type;

public:

					Animal();
					Animal( Animal const & src );
	virtual			~Animal( void );

	Animal &		operator=( Animal const & other );

	std::string		getType( void ) const;

	virtual  void	makeSound( void ) const;

};

