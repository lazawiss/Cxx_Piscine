/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:19:00 by lzannis           #+#    #+#             */
/*   Updated: 2026/09/14 17:24:59 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main( int arc, char * arv[]){

    if (arc == 2){
        
        try{
            std::string buf = arv[1];
            BitcoinExchange btc(buf);
            btc.parseInput();
        }
        catch(std::runtime_error &e){
            
            std::cerr << e.what() << std::endl;
            return 1;
        }
    }
    else{
        std::cerr << "Error: Need a file" << std::endl;
        return 1;
    }
    return 0;
}


// todo check doublon date csv