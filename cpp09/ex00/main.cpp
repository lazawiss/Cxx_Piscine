/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leazannis <leazannis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:25:13 by leazannis         #+#    #+#             */
/*   Updated: 2026/05/06 13:29:51 by leazannis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int arc, char *arv[]){

    if (arc == 2){
        
        std::ifstream ifs(arv[1]);
    }
    else
        std::cout << "Error: need a file." << std::endl;

    return 0;
}