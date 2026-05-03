/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 22:37:24 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/11 12:43:11 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"



class Cure : public AMateria {

public:
    
                    Cure( void );
                    Cure( Cure const & src );
    virtual         ~Cure( void );
    
    Cure &          operator=( Cure const & other );

    Cure*           clone( void ) const;
    virtual void    use( ICharacter& target );

};
