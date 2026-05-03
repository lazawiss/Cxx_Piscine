/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:35:44 by lzannis           #+#    #+#             */
/*   Updated: 2026/05/03 17:37:17 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template< typename T >
void    foo( T & x ){

    x++;
}

template<typename T>
void multiply_by_two(T &x) {
    
    x *= 2;
}

template< typename T >
void    print_array(T const *arr, size_t const length){
    
    std::cout << "array[" << length << "]= ";
    for ( size_t i = 0; i < length ; i++){
            std::cout << arr[i] ;
            if (i < length - 1)
                std::cout<< ", ";
    }
    std::cout << "." << std::endl;  
}

template< typename T, typename U >
void    iter( T *adress, U const length, void  f(T & a) ){
    
    if (adress && length > 0){
        
        for ( size_t i = 0; i < length ; i++){
            f(adress[i]); 
        }
    }
}

template< typename T, typename U >
void    iter( T const *adress, U const length, void  f(T const *arr, size_t const length) ){
    
    if (adress){
        
        f(adress, length); 
    }
}
