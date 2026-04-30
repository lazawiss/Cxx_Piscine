/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 18:20:45 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/24 18:21:05 by lzannis          ###   ########.fr       */
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
