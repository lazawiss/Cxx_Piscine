/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:06:10 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/16 18:38:00 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include <new>
#include <memory>


template< typename T >
class Array{

private:

    unsigned int    _n;
    T               *_arr;

public:

            Array( void ) : _n(0), _arr(NULL){
                
            }
            Array( unsigned int n) : _n(n){
                
                _arr = static_cast<T *>(::operator new [](_n * sizeof(T)));
                if (!_arr)
                    throw std::bad_alloc();
                for (unsigned int i = 0;i < _n;i++){
                    new (&_arr[i]) T();//placement new : construit un objet a l'emplacement deja alloue
                }
            }
            Array( Array const & src ) {
                
                _n = src._n;
                _arr = static_cast<T *>(::operator new [](_n * sizeof(T)));
                if (!_arr)
                    throw std::bad_alloc();
                for (unsigned int i = 0;i < _n;i++){
                    new (&_arr[i]) T(src._arr[i]);//placement new : construit un objet a l'emplacement deja alloue
                }
            }
            ~Array( void ){
                
                if(_arr){
                    
                    // for (unsigned int i = 0; i < _n; i++) {
                    //     _arr[i].~T(); // Appelle le destructeur de T
                    // }
                    
                    ::operator delete [] (_arr);
                }
            }
    
    Array & operator=( Array const & other){
        
        if (this != &other){
            _n = other._n;
            if(_arr)
                delete [] _arr;
            _arr = static_cast<T *>(::operator new [](_n * sizeof(T)));
            if (!_arr)
                throw std::bad_alloc();
            for (unsigned int i = 0;i < _n;i++){
                new (&_arr[i]) T(other._arr[i]);//placement new
            }
        }
        
        return *this;
    }

    void*     operator new[]( size_t size ){
        
        return ::operator new [](size * sizeof(T));
    }
    
    T &     operator[]( unsigned int index ){
    
        if (!_arr || index >= _n)
            throw std::exception();
        return _arr[index];
    }

    unsigned int     size( void ) const{
        
        return _n;
    }

};

