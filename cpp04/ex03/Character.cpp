/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 19:25:31 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/11 19:17:42 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Character::Character( std::string name ) : _name(name){
    
    std::cout << "Constructor Character called" <<std::endl;
  
    for (int i = 0; i < 4; i++) {
        
            this->_bag[i] = 0;
    }
    for (int i = 0; i < 50; i++) {
        
            this->_floor[i] = 0;
    }
}

Character::Character( Character const & src ) : _name(src._name){
    
    std::cout << "Copy Constructor Character called" <<std::endl;
    *this = src;
}

Character::~Character( void ) {
 
    for (int i = 0; i < 4; i++) {
        if  (this->_bag[i])  
        delete this->_bag[i];
    }
    for (int i = 0; i < 50; i++) {
        
        if (this->_floor[i]){
            delete this->_floor[i];
        }
    }
    std::cout << "Destructor Character called" << std::endl;
}

Character & Character::operator=( Character const & other ) {
    
    std::cout << "Assignment Operator Character called" << std::endl;
	if (this != &other){
        this->_name = other._name;
        for (int i = 0; i < 4; i++) {
            if  (this->_bag[i])  
                this->_bag[i] = other._bag[i];
        }
    }
	return *this;
}

std::string const & Character::getName( void ) const {

    return this->_name;
}

void    Character::equip( AMateria* m ) {

    if (m == 0)
        return;
    for (int i = 0; i < 4; i++) {
        
        if (this->_bag[i] == 0){
            this->_bag[i] = m;
            return;
        }
    }
    std::cout << "Your bag is full" << std::endl;
    std::cout << "The item " << m->getType() << " is on the floor " << std::endl;
    
     for (int i = 0; i < 50; i++) {
        
        if (this->_floor[i] == 0){
            this->_floor[i] = m;
            return;
        }
    }

    delete m;

}

void    Character::unequip( int idx ) {
    
    if (idx > 3 || idx < 0) {
        
        std::cout << "Error: enter a correct index please" << std::endl;
        return;
    }
    AMateria* tmp = this->_bag[idx];
    this->_bag[idx] = 0;
    std::cout << "The slot " << idx << " is empty" << std::endl;
    if (tmp)
        std::cout << "The item " << tmp->getType() << " is on the floor " << std::endl;
    for (int i = 0; i < 50; i++) {
        
        if (this->_floor[i] == 0){
            this->_floor[i] = tmp;
            return;
        }
    }

    delete tmp;
}


void    Character::use( int idx, ICharacter& target ) {
    
    if (idx > 3 || idx < 0) {
        
        std::cout << "Error: enter a correct index please" << std::endl;
        return;
    }
    switch (idx){
        case 0:
        if (this->_bag[idx])
            this->_bag[idx]->use(target);
        break ;
        case 1:
        if (this->_bag[idx])
            this->_bag[idx]->use(target);
        break ;
        case 2:
        if (this->_bag[idx])
            this->_bag[idx]->use(target);
        break ;
        
        case 3:
        if (this->_bag[idx])
            this->_bag[idx]->use(target);
        break ;

        default: 
        break ;
    }
}