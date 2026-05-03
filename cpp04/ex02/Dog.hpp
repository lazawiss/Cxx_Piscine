/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 20:19:35 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/11 20:05:55 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"


class Dog : public AAnimal {

private:

	Brain*	DogBrain;
	
public:
		
					Dog();
					Dog( Dog const & src );
	virtual			~Dog( void );
	
	virtual Dog &	operator=( Dog const & other );

	void			makeSound( void ) const;
	
	virtual Brain*	getBrain() const;

};