/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 17:52:08 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/24 19:09:33 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <limits>
#include <bits/stdc++.h>

int	main( void ){
	
	std::string buf;
	Harl		H;
	
	while(1){
		
		std::cout << "Which level of satisfaction are you at today(DEBUG/INFO/WARNING/ERROR/ENTER TO LEAVE) : " << '\n';
		if (!std::getline (std::cin, buf)) {
			
			if (std::cin.eof()) {
				
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			exit (EXIT_SUCCESS);
		}
		if (buf.empty())
			break ;
		H.complain(buf);
	}
	return 0;
}