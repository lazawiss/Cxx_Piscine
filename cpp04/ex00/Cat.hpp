/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 20:39:23 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/07 18:17:34 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal {

public:

			Cat();
			Cat( Cat const & src );
	virtual	~Cat( void );
	
	Cat &	operator=( Cat const & other );
	
	void	makeSound( void ) const;

};