/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:20:09 by lzannis           #+#    #+#             */
/*   Updated: 2026/09/14 14:32:55 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <istream>
#include <sstream>
#include <stdexcept>
#include <map>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>
#include <sys/stat.h>
#include <sys/sysmacros.h>
#include <time.h>
#include <bits/stdc++.h>



class BitcoinExchange{

private:

    std::string                     _buf;
    int                             _year;
    int                             _month;
    int                             _day;
    std::map<std::string, float>    _dataCsv; 

public:

                        BitcoinExchange( std::string & input );
                        BitcoinExchange(BitcoinExchange const & src);
                        ~BitcoinExchange();
    BitcoinExchange &   operator=( BitcoinExchange const & other );


    bool                is_digit(std::string & str);

    //parse .cvs >> return date & value in map
    void                parseCsv();
    bool                checkDateCvs(std::string &inputDate);
    
    //test if map empty
    // parse input
    void                parseInput();
    bool                checkDate(std::string &inputDate);
    // compare date from input and cvs
    float               findRate(std::string & date);
    
    bool                isMonth31();
    bool                isMonth30();
    bool                isFebruary29();
    std::string         intToStringDate();

};


template<typename T>
bool    checkValue(T value){

    if (value < 0){
        std::cout << "Error: not a positiv number => " << static_cast<long>(value) << std::endl;
        return false;
    }
    if (value > 1000){
        std::cout << "Error: too large a number => " << static_cast<long>(value) << std::endl;
        return false;
    }
    return true;
}