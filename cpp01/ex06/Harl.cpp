/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 18:21:16 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/24 19:00:00 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ){
}

Harl::~Harl( void ){
}

void	Harl::debug( void ){
	
	std::cout << "DEBUG" << '\n';
	std::cout << '\n';
	std::cout << "I love having extra bacon for my 7XL"\
	"-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	std::cout << '\n';

}

void	Harl::info( void ){

	std::cout << "INFO" << '\n';
	std::cout << '\n';
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"\
	" enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << '\n';
	
}

void 	Harl::warning( void ){
	
	std::cout << "WARNING" << '\n';
	std::cout << '\n';
	std::cout << "I think I deserve to have some extra bacon for free."\
	"I’ve been coming for years, whereas you started working here just last month." << std::endl;
	std::cout << '\n';

}

void	Harl::error( void ){
	
	std::cout << "ERROR" << '\n';
	std::cout << '\n';
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << '\n';
}

void	Harl::complain( std::string level ){

	int complain = 4;
	
	std::string	stringLevel[4] = {
		
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
		
	for (int i = 0; i < 4; i++){
		
		if (!level.compare(stringLevel[i]))
		{
			complain = i;
			break ;
		}
	}
	
	switch(complain)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			std::cout << "Probably complaining about insignificant problems" << '\n';
		}
		
	return;
}
