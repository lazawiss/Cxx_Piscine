/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 20:38:36 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/03 20:46:11 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

				FragTrap( std::string name);
				FragTrap( FragTrap const & src);
				~FragTrap( void );

	FragTrap &	operator=( FragTrap const & other );

	void		highFivesGuys( void );
	
};