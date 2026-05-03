/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:13:48 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/10 17:48:25 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"


Cure::Cure( void ) : AMateria("cure"){
    
    std::cout << "Constructor Cure called" <<std::endl;

}

Cure::Cure( Cure const & src ) : AMateria(src){
    
    std::cout << "Copy Constructor Cure called" <<std::endl;

}

Cure::~Cure( void ) {

    std::cout << "Destructor Cure called" << std::endl;
    
}
    
Cure &  Cure::operator=( Cure const & other ) {
    
      std::cout << "Assignment Operator Cure called" << std::endl;
	if (this != &other)
        AMateria::operator=(other);
	return *this;
}

Cure*   Cure::clone( void ) const{
    
    return new Cure(*this);
}

void    Cure::use( ICharacter& target ){
    
    std::cout << "* heals " <<  target.getName() << "’s wounds *" << std::endl;

}