/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:52:00 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/03 17:52:53 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int arc, char *arv[]){
    
    if ( arc == 2 ){
        
        ScalarConverter::Convert( arv[1] );
    }

    return 0;
}