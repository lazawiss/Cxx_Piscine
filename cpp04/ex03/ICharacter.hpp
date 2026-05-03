/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 22:19:42 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/11 12:30:44 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class AMateria;

class ICharacter {

public:
    

    virtual                     ~ICharacter( void ){}
    virtual std::string const & getName() const = 0;
    virtual void                equip( AMateria* m ) = 0;
    virtual void                unequip( int idx ) = 0;
    virtual void                use( int idx, ICharacter& target ) = 0;
    
};