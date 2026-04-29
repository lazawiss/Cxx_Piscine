/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 19:15:25 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/17 11:02:53 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int	main( int argc, char *argv[] ) {
	
	std::string str;
	std::locale loc;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE NOISES *";
	
	for(int i = 1; i < argc; i++)
	{
		str += argv[i];
		int	len = 0;
			
		len = std::char_traits<char>::length( str.c_str() );
		for(int j = 0; j <= len; j++)
			std::cout << std::toupper( str[j], loc);
		str.clear();
	}
	
	std::cout << std::endl;
	
	return 0;
}
