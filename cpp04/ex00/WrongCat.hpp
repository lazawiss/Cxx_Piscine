/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 20:50:42 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/11 19:29:10 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

				WrongCat();
				WrongCat( WrongCat const & src );
				~WrongCat( void );
	
	WrongCat &	operator=( WrongCat const & other );
	
	void		makeSound( void ) const;

};