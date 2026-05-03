/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 20:39:23 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/11 20:05:06 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"


class Cat : public AAnimal {

private:

	Brain*	CatBrain;
	
public:

			Cat();
			Cat( Cat const & src );
	virtual	~Cat( void );
	
	Cat &	operator=( Cat const & other );
	
	void	makeSound( void ) const;

	Brain*	getBrain() const;
};