/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 20:40:23 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/11 18:45:37 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <bits/stdc++.h>



MateriaSource::MateriaSource( void ) {
    
    std::cout << "Constructor MateriaSource called" <<std::endl;
    
    for (int i = 0; i < 4; i++) {
        
            this->_bag[i] = 0;
    }
}

MateriaSource::MateriaSource( MateriaSource const & src ) {
    
     std::cout << "Copy Constructor MateriaSource called" <<std::endl;
	*this = src;
}

MateriaSource::~MateriaSource( void ) {
    
    for (int i = 0; i < 4; i++) {
        if  (this->_bag[i])  
        delete this->_bag[i];
    }
    std::cout << "Destructor MateriaSource called" << std::endl;
    
}

MateriaSource & MateriaSource::operator=( MateriaSource const & other ) {
    
    std::cout << "Assignment Operator Character called" << std::endl;
	if (this != &other){
        for (int i = 0; i < 4; i++) {
            if (this->_bag[i])  
                this->_bag[i] = other._bag[i];
        }
    }
		
	return *this;
}

void    MateriaSource::learnMateria( AMateria* ptr) {

    for (int i = 0; i < 4; i++) {
        
        if (this->_bag[i] == 0){
            this->_bag[i] = ptr;
            return;
        }
    }
    
    std::cout << "You've exceded the creation of item" << std::endl;
    
    delete ptr;
}

AMateria*   MateriaSource::createMateria( std::string const & type ) {
    
    if ((type.compare("ice") != 0) && (type.compare("cure") != 0)){
        
        std::cout << "enter a correct type " <<std::endl;
        return 0;
    }
    for (int i = 0; i < 4; i++) {
        
        if ( this->_bag[i] ){

            if ((this->_bag[i]->getType().compare("ice") == 0) && (type.compare("ice") == 0))
                return this->_bag[i]->clone();
            if ((this->_bag[i]->getType().compare("cure")) == 0 && (type.compare("cure") == 0))
                return this->_bag[i]->clone();
        }
    }
    std::cout <<  type << " not found" <<std::endl;
    return 0;
}