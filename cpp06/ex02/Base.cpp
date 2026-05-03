/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:36:05 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/07 15:53:22 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(){
    
}

Base::~Base(){
    
}
    
Base*   Base::generate(){
    
    Base* p = NULL;
    
    int randomNum = rand() % 3;

    switch(randomNum){
        
        case(0):
        p = new A();
        break ;
        case(1):
        p = new B();
        break ;
        case(2):
        p = new C();
        break ;
    }

    return p;
}

void    Base::identify( Base * p ){
    
    if ( p == NULL ){
        
        std::cout << "Error pointer" << std::endl;
        return;
    }
    if ( dynamic_cast<A*>(p) )
        std::cout << "pointer: A" << std::endl;
    else if ( dynamic_cast<B*>(p) )
        std::cout << "pointer: B" << std::endl;
    else if ( dynamic_cast<C*>(p) )
        std::cout << "pointer: C" << std::endl;
    else
        std::cout << "Error pointer" << std::endl;
    
}

void    Base::identify( Base & p ){
    
    try {
        
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "reference: A" << std::endl;
        return ;
    }
    catch( std::exception & e ){
        
    }
    try {
        
        B& b = dynamic_cast<B&>(p);
        if ( &b == &p ){

            std::cout << "reference: B" << std::endl;
            return ; 
        } 
    }
    catch( std::exception & e ){
        
    }
    try {
        
        C& c = dynamic_cast<C&>(p);
        if (  &c == &p ){
            
            std::cout << "reference: C" << std::endl;
            return ;
        }
    }
    catch( std::exception & e ){
        
        std::cout << "Error reference " << e.what() << std::endl;
    }
}
    