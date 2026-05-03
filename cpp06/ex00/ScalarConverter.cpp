/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 18:49:55 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/07 19:17:24 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ){
    
}

ScalarConverter::ScalarConverter( ScalarConverter & src ){
    
    *this = src;
}

ScalarConverter::~ScalarConverter( void ) {
    
}

ScalarConverter & ScalarConverter::operator=( ScalarConverter & other  ){
    
    if (this != &other)
        *this = other;
    return *this;
}

void ScalarConverter::Convert( std::string str ){
    
    int     i = 0;
    bool    is_print = false;
    bool    is_a_int = false;
    bool    is_a_nan = false;
    char    *end = NULL;
    char    char_value = 'a';
    long     int_value = 0;
    float   float_value = 0.0f;
    double  double_value = 0.0;
    
    size_t  len = str.length();
   
    if ( str == "nan" || str == "-nan" || str == "inff" || str == "-inff" || str == "inf" || str == "-inf" ){
    
        is_a_int = true;
        is_a_nan = true;
    }
    
    if ( len == 1  && !isdigit(str[i])){
        
        int_value = static_cast<int>(str[i]);
        is_a_int = true;
    }
    else
        int_value = std::strtol(str.c_str(), &end, 10);

    if ( (int_value >= 33 && int_value <= 94) || (int_value >= 96 && int_value <= 126) )
        is_print = true;
    
    if ( is_a_nan == 1 || int_value >= INT_MAX || int_value <= INT_MIN )
        std::cout << "char: Impossible" << std::endl;
    else if (len > 1 && is_print == 1 ){
        
        char_value = static_cast<char>(int_value);
        std::cout << "char: " << char_value << std::endl;
    }
    else if (len == 1  && is_print == 1) {
        
        char_value = static_cast<char>(str[i]);
        std::cout << "char: " << char_value << std::endl;
    }
    else
        std::cout << "char: Non displayable" << std::endl;
    
   if ( is_a_nan == 1 || int_value > INT_MAX || int_value < INT_MIN )
        std::cout << "int: Impossible" << std::endl;
    else
        std::cout << "int: " << int_value << std::endl;
 
    if ( !is_a_int || is_a_nan )
        float_value = strtof(str.c_str(), &end);
    else
        float_value = static_cast<float>(int_value);
        
    is_a_int = ( float_value == std::floor(float_value) );
    if ( errno == ERANGE )
         std::cout << "float: Impossible" << std::endl;
    else {
     
        if ( is_a_int == true && is_a_nan == false )
            std::cout << "float: " << float_value << ".0f" << std::endl;
        else
            std::cout << "float: " << float_value << "f" << std::endl;
    }
    
    if ( !is_a_int || is_a_nan )
        double_value = strtod(str.c_str(), &end);
    else
        double_value = static_cast<double>(int_value);
    if ( errno == ERANGE )
        std::cout << "double: Impossible" << std::endl;
    else {
        
        if ( is_a_int == true && is_a_nan == false )
            std::cout << "double: " << double_value << ".0" << std::endl;
        else
            std::cout << "double: " << double_value << std::endl;
    }
}
