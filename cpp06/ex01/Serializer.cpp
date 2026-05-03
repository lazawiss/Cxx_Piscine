/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 20:38:56 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/06 15:14:36 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){
    
}

Serializer::Serializer( Serializer & src ){
    
    *this = src;
}

Serializer::~Serializer(){
    
}

Serializer & Serializer::operator=( Serializer & other ){
    
    if (this != &other)
        *this = other;
    
    return *this;
}

uintptr_t   Serializer::serialize( Data* ptr ){

    uintptr_t uint_ptr = 0;
    uint_ptr = reinterpret_cast<uintptr_t>(ptr);
    return uint_ptr;
    
}

Data*   Serializer::deserialize( uintptr_t raw ){
    
    Data* ptr = NULL; 
    ptr = reinterpret_cast<Data*>(raw);
    
    return ptr;
}
