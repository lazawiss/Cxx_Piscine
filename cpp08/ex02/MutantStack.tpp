/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:07:26 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/26 14:44:22 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <list>
#include <map>
#include <vector>
#include <new>
#include <memory>
#include <stack>

template< typename T >
class MutantStack : public std::stack<T>{
    
public:
    
                            MutantStack( void ){ }
                            MutantStack( MutantStack & src ) : std::stack<T>(src){ }
                            ~MutantStack( void ){ }
    MutantStack &           operator=( MutantStack & other){
        
        if (this != &other)
            std::stack<T>::operator=(other);
            
        return *this;
    }
    
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator; 
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
    
    iterator                begin( void ){ return this->c.begin(); }
    iterator                end( void ){ return this->c.end(); }
    const_iterator          cbegin( void ) const{ return this->c.begin(); }
    const_iterator          cend( void ) const{ return this->c.end(); }
    reverse_iterator        rbegin(){ return this->c.rbegin(); }
    reverse_iterator        rend(){ return this->c.rend(); }
    const_reverse_iterator  crbegin() const{ return this->c.rbegin(); }
    const_reverse_iterator  crend() const{ return this->c.rend(); }
  
};
