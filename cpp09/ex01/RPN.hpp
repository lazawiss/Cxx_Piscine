/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:24:47 by lzannis           #+#    #+#             */
/*   Updated: 2026/09/15 16:06:05 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <stack>
#include <list>
#include <algorithm>

// stack ?? deque ?? list ?? vector ??
class RPN {

private:

    std::list<char> _input;
    int             _carried;


public:

            RPN( std::list<char> &input );
            RPN( RPN const & src );
            ~RPN();
    RPN &   operator=( RPN const & other );

// parse input
// convert string into int
int        parseInput();

bool        isSign( char & hold );

// make operations
int         makeOperations(int & leftNum, int & rightNum);

// store results
// continue operations if stck signs !empty && stck nmbrs > 1

};