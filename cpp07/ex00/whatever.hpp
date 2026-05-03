/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:49:27 by lzannis           #+#    #+#             */
/*   Updated: 2026/05/03 17:32:35 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template< typename T >
void   swap( T & a, T & b ){
    
    T temp = a;
    a = b;
    b = temp; 
}

template< typename T >
T const &   min( T const & a, T const & b ){
    
    return( a <= b ? a : b );
}   

template< typename T >
T const &   max( T const & a, T const & b ){
    
    return( a >= b ? a : b );
}
