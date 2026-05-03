/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 20:30:43 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/07 19:16:50 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <typeinfo>
#include <stdint.h>
#include <limits.h>
#include <float.h>


typedef struct Data {
    
    char    char_value;
    int     int_value;
    float   float_value;
    double  double_value;
    
} Data;


class Serializer {
  
private:
    
                        Serializer();
                        Serializer( Serializer & src );
                        ~Serializer();

    Serializer &        operator=( Serializer & other );
    
public:

    static uintptr_t    serialize( Data* ptr);
    static Data*        deserialize( uintptr_t raw );
    
};
