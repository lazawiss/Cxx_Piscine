/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 19:36:29 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/26 15:02:07 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( ) : _N(0), _v(0){
    
     
}

Span::Span( unsigned int N ) : _N(N){
    
    _v.reserve(_N);
}

Span::Span( Span const & src ) : _N(src._N), _v(src._v){
    
}

Span::~Span( void ){
    
}

Span &  Span::operator=( Span const & other ){
    
    if (this != &other){
        
        _N = other._N;
        _v = other._v;  
    }
        
    return *this;
}

void    Span::printV( void ) const{
    
    for ( unsigned int i = 0; i < _v.size(); ++i ){
        
        std::cout << _v[i] << std::endl;
    }
}

void    Span::addNumber( int n ){
    
    if (_v.size() >= _N)
        throw std::out_of_range("Error: Out of range\n");  
    _v.push_back(n);
}

unsigned int    Span::shortestSpan( void ){
    
     if (_v.size() <= 1)
        throw std::logic_error("Error: Range too small.\n");
        
    unsigned int shortest = UINT_MAX;

    sort(_v.begin(), _v.end());
    size_t it = 0;
    for (size_t  it2 = it + 1; it < _v.size() && it2 < _v.size(); it++, it2++){
        
        unsigned int diff = _v[it2] - _v[it];
        if (diff == 0)
            continue;
        if ( diff < shortest)
            shortest = diff;
    }

    return shortest;
}

unsigned int    Span::longestSpan( void ){
    
     if (_v.size() <= 1)
        throw std::logic_error("Error: Range too small.\n");
        
    unsigned int longest = 0;

    sort(_v.begin(), _v.end());
    
    std::vector<int>::const_iterator   it = _v.begin();
    std::vector<int>::const_iterator   itend = _v.end() - 1;
   
    longest = *itend - *it;

    return longest;    
}
