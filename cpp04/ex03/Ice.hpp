/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 22:33:01 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/10 17:34:41 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Ice : public AMateria {

public:

                    Ice( void );
                    Ice( Ice const & src );
    virtual         ~Ice( void );
    Ice &           operator=( Ice const & other );

    Ice*            clone( void ) const;
    virtual void    use( ICharacter& target );
    
};