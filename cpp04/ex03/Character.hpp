/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 22:36:48 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/11 15:18:04 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {

private:

    std::string         _name;
    AMateria*            _bag[4];
    AMateria*            _floor[50];
    
    
public:

                        Character( std::string name );
                        Character( Character const & src );
    virtual             ~Character( void );

    Character &         operator=( Character const & other );

    std::string const & getName( void ) const;
    void                equip( AMateria* m );
    void                unequip( int idx );
    void                use( int idx, ICharacter& target );
};