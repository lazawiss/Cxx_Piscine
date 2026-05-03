/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:41:17 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/06 17:45:24 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main( void ){

    srand(time(0));
    
    Base Basic;

    Base * newclass;

    newclass = Basic.generate();
    
    Base & newclassref = *newclass;
    Basic.identify(newclass);
    Basic.identify(newclassref);
    
    delete newclass;
    return 0;
}