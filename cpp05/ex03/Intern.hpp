/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 17:57:02 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/20 19:09:13 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

#include "AForm.hpp"


class Intern {

public:

                Intern( void );
                Intern( Intern const & src );
                ~Intern( void );
    
    Intern &    operator=( Intern const & src );
    
    AForm*     makeForm( std::string name, std::string target );

};
