/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 16:15:35 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/10 17:50:33 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"


AMateria::AMateria( std::string const & type ) : _type(type){

    std::cout << "Constructor AMateria called" << std::endl;
}

AMateria::AMateria( AMateria const & src ) : _type(src._type){
    
    std::cout << "Copy Constructor AMateria called" << std::endl;
}

AMateria::~AMateria( void ) {

    std::cout << "Destructor AMateria called" << std::endl;
}

AMateria & AMateria::operator=( AMateria const & other ){
    
    std::cout << "Assignment Operator AMateria called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}
    
std::string const & AMateria::getType() const{
    
    return this->_type;
}

void    AMateria::use( ICharacter& target ) {
    
    std::cout << this->_type << "makes stuff happen to " << target.getName() << std::endl; 
}

