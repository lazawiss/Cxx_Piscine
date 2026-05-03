/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:30:00 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/07 14:54:41 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <stdexcept>



class Base {
  
public:

            Base();
    virtual ~Base();
    
    Base*   generate();
    void    identify( Base * p );
    void    identify( Base & p );
    
};

class A : public Base {};

class B : public Base {};

class C : public Base {};
