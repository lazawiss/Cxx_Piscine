/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leazannis <leazannis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:22:36 by leazannis         #+#    #+#             */
/*   Updated: 2026/05/06 13:41:36 by leazannis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <map>
#include <algorithm>
#include <stdexcept>
#include <fstream>

class BitcoinExchange {
    
private:

    std::string                 _date;
    unsigned int                _exchangeRate;
    std::map<std::string, int>  _mapCVS;
    
public:

    BitcoinExchange( std::string Input );
    BitcoinExchange( BitcoinExchange const & src );
    ~BitcoinExchange();
    BitcoinExchange( BitcoinExchange const & other );

    void    parseCVS();
    void    parseInput();
    

};

