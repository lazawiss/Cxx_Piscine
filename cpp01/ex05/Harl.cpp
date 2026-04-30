/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 17:35:57 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/24 19:08:37 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ){
}

Harl::~Harl( void ){
}

void	Harl::debug( void ){
	
	std::cout << "I love having extra bacon for my 7XL"\
	"-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	std::cout << '\n';
}

void	Harl::info( void ){

	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"\
	" enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << '\n';
}

void 	Harl::warning( void ){
	
	std::cout << "I think I deserve to have some extra bacon for free."\
	"I’ve been coming for years, whereas you started working here just last month." << std::endl;
	std::cout << '\n';
}

void	Harl::error( void ){
	
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << '\n';
}

void	Harl::complain( std::string level ){

	std::string	stringLevel[4] = {
		
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	
	void	(Harl::*f_stringPtr[4]) () = {
		
		&Harl::debug,
		&Harl::info,	
		&Harl::warning,	
		&Harl::error	
	};
	
	for (int i = 0; i < 4; i++){
		
		if (!level.compare(stringLevel[i]))
		{
			(this->*f_stringPtr[i]) ();
			return;
		}
	}
	std::cout << "UNKNOWN LEVEL" << '\n';
	std::cout << '\n';
	return;
}
