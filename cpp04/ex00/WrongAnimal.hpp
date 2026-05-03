/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 20:47:13 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/11 19:29:17 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal {

protected:
	
	std::string		_type;

public:

					WrongAnimal();
					WrongAnimal( WrongAnimal const & src );
					~WrongAnimal( void );

	WrongAnimal &	operator=( WrongAnimal const & other );

	std::string		getType( void ) const;
	
	void			makeSound( void ) const;

};
