/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 22:25:53 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/10 16:10:49 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp" 

class IMateriaSource {
	
public:

    virtual ~IMateriaSource() {}
    virtual void learnMateria( AMateria* ) = 0;
    virtual AMateria* createMateria( std::string const & type ) = 0;
};