/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 14:47:43 by lzannis           #+#    #+#             */
/*   Updated: 2026/02/24 19:15:36 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main( int arc, char *arv[] ){
	
	if (arc == 0)
		return 0;
	if (arc == 4){
		
		std::string	s1(arv[2]);
		std::string	s2(arv[3]);
		std::string	buf;
		
		if (s1.empty() || s2.empty()){
			
			std::cout << "string cannot be empty" << '\n';
			return 1;
		}
		std::ifstream	ifs(arv[1]);
		if (ifs.is_open()){
			
			if (!getline(ifs, buf, '\0')){
				
				std::cout << "Error: getline " << std::endl;
				return 1;
			}
		}
		else {
			std::cout << "Error: file doesn't exist or wrong file descriptor" << std::endl;
			return 1;
		}
		ifs.close();
		
		std::size_t found = buf.find(s1);
		while (found!=std::string::npos){		
			
			buf.erase(found, s1.length());
			buf.insert(found, s2);
			found = buf.find(s1, found + s2.length());
		}
	
		std::ofstream ofs("test.replace");
		if (ofs.is_open()){
				ofs << buf;
		}
		else {
			std::cout << "Error: file doesn't open" << std::endl;
			return 1;
		}
		ofs.close();
	}
	return 0;
}
