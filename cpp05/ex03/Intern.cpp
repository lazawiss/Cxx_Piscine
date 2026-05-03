/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 17:58:19 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/23 12:32:32 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



Intern::Intern( void ){
    
    std::cout << "Constructor Intern called" << std::endl;
}

Intern::Intern( Intern const & src ){
    
    std::cout << "Copy Constructor Intern called" << std::endl;
    *this = src;
}

Intern::~Intern( void ){
  
    std::cout << "Destructor Intern called" << std::endl;
    
}
    
Intern &    Intern::operator=( Intern const & other ){
    
    if (this != &other)
        *this = other;
    std::cout << "Assignment Operator Intern called" << std::endl;
    
    return *this;
}

AForm*     Intern::makeForm( std::string name, std::string target ){
    
    AForm* ptr = NULL;
    int n = -1;
    
    std::string	stringLevel[3] = {
		
        "shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	
	
	for (int i = 0; i < 3; i++){
		
		if (name == stringLevel[i])
		{
            std::cout << stringLevel[i] << std::endl;
            n = i;
            break ;
		}
	}

    switch(n) {
        
        case 0:
        ptr = new ShrubberyCreationForm( target );
        break ;
        case 1:
        ptr = new RobotomyRequestForm( target );
        break ;
        case 2:
        ptr = new PresidentialPardonForm( target );
        break ;
        default:
        std::cout << "This Form can't be created."<< std::endl;
        return NULL;
    }
   
    std::cout << "Intern creates " << name << std::endl;
    
	return ptr; 
}
