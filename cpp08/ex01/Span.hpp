/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 19:26:19 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/24 16:05:30 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <algorithm>
#include <list>
#include <map>
#include <vector>
#include <new>
#include <memory>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <fcntl.h>
#include <unistd.h>
#include <set>
#include <climits>



class Span{
    
private:
    
    unsigned int        _N;
    std::vector<int>    _v;
                        Span();
    
public:
        
                        Span( unsigned int N );
                        Span( Span const & src );
                        ~Span( void );
        
    Span &              operator=( Span const & other );
    
    void                printV( void ) const;
    
    
    template< typename InputIterator >
    void  fillArray( InputIterator begin, InputIterator end){
        
        if ( _v.size() + (end - begin) >= _N ) 
            throw std::out_of_range("Error: Array is full\n");
        while(begin != end){
            
            if (_v.size() >= _N )
                throw std::out_of_range("Error: Out of range\n");  
            addNumber(*begin);
            begin++;
        }
    }
        
    void                addNumber( int n );
        
    unsigned int        shortestSpan( void );
    unsigned int        longestSpan( void );
    
};
