/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 19:23:44 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/19 16:56:08 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <list>
#include <stdexcept>
#include <map>
#include <vector>
#include <deque>
#include <stack>





template< typename T >
void    easyfind( T & a, int b){

    typename T::const_iterator found;
 
    found = find(a.begin(), a.end(),b);
    if (found != a.end()){
        
        std::cout << "Correspondance between the given element " << b;
        std::cout << " and the container's element " << *found << " was found." << std::endl;
    }
    else    
        std::cout << "No correspondance were found." << std::endl;

}