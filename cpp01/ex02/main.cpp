/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:49:20 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/19 15:57:13 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main( void ) {
	
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str; 
	std::string &stringREF = str;
	
	std::cout << &str << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << str << std::endl;
	std::cout << *(stringPTR) << std::endl;
	std::cout << stringREF << std::endl;

	return 0;
}
