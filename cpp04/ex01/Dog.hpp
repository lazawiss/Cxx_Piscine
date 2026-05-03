/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 20:19:35 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/11 20:18:29 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal {

private:

	Brain*	DogBrain;
	
public:
		
			Dog();
			Dog( Dog const & src );
			~Dog( void );
	
	Dog &	operator=( Dog const & other );

	void	makeSound( void ) const;
	
	Brain*	getBrain() const;

};