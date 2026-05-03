/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:04:12 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/16 16:49:35 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {
    
    {
        
        int a = 2;
        int b = 3;
        
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        
        std::string c = "chaine1";
        std::string d = "chaine2";
        
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
        
        float e = 6.2f;
        float f = 9.3f;
        
        ::swap( e, f );
        std::cout << "e = " << e << ", f = " << f << std::endl;
        std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
        std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
        
    }
    
    return 0;
}