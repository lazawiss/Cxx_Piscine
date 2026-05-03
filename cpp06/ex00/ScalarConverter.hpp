/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 18:49:29 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/07 17:07:39 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include <typeinfo>
#include <limits.h>
#include <cstdlib>
#include <string.h>
#include <stdlib.h>
#include <cerrno>
#include <cmath>
#include <float.h>
#include <stdexcept>




class ScalarConverter{
    
private:

    
                        ScalarConverter( void );
                        ScalarConverter( ScalarConverter & src );    
                        ~ScalarConverter( void );
                        
    ScalarConverter &   operator=( ScalarConverter & other  );
    
public:

    static void         Convert( std::string str);

};
