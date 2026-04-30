/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 17:34:56 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/24 17:50:44 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Harl{
	
private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	
public:

	Harl( void );
	~Harl( void );
	
	void	complain( std::string level );
};
