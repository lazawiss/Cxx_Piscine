/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:50:12 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/10 17:48:42 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"


Ice::Ice( void ) : AMateria("ice") {
    
    std::cout << "Constructor Ice called" <<std::endl;
}

Ice::Ice( Ice const & src ) : AMateria(src){
    
    std::cout << "Copy Constructor Ice called" <<std::endl;

}

Ice::~Ice( void ) {

    std::cout << "Destructor Ice called" << std::endl;
    
}

Ice & Ice::operator=( Ice const & other ) {
    
    std::cout << "Assignment Operator Ice called" << std::endl;
	if (this != &other)
        AMateria::operator=(other);
	return *this;
}

Ice*   Ice::clone( void ) const{
    
    return new Ice(*this);
}

void    Ice::use( ICharacter& target ) {
    
    std::cout << "* shoots an ice bolt at " <<  target.getName() << " *" << std::endl;
}