/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 22:35:08 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/11 14:04:39 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {

private:

    AMateria*            _bag[4];
    
public:

                    MateriaSource( void );
                    MateriaSource( MateriaSource const & src );
    virtual         ~MateriaSource( void );

    MateriaSource & operator=( MateriaSource const & other );
    
    void            learnMateria( AMateria* ptr);
    AMateria*       createMateria( std::string const & type );
};