/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 22:14:04 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/11 12:31:16 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	
protected:

    std::string         _type;
    
public:
    
                        AMateria( std::string const & type );
                        AMateria( AMateria const & src );
    virtual             ~AMateria( void );
    
    AMateria &          operator=( AMateria const & other );
    
    std::string const & getType( void ) const; //Returns the materia type
    virtual AMateria*   clone( void ) const = 0;
    virtual void        use( ICharacter & target );

};