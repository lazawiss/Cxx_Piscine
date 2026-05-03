/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 20:19:35 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/07 18:17:42 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal {

public:
	
			Dog();
			Dog( Dog const & src );
	virtual ~Dog( void );
	
	Dog &	operator=( Dog const & other );

	void	makeSound( void ) const;
	
};