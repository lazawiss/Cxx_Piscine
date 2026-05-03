/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 22:07:14 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/08 22:07:17 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class AAnimal {

protected:
	
	std::string		_type;

public:

					AAnimal();
					AAnimal( AAnimal const & src );
	virtual			~AAnimal( void );

	AAnimal &		operator=( AAnimal const & other );

	std::string		getType( void ) const;

	virtual  void	makeSound( void ) const = 0;

};

