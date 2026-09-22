/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:26:27 by lzannis           #+#    #+#             */
/*   Updated: 2026/09/15 16:14:29 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int arc, char *arv[] ){

    if (arc != 2){
        std::cerr << "Error: Not enough arguments." << std::endl;
        std::cerr << "n: [0123456789]" << std::endl;
        std::cerr << "s: [+-*/]" << std::endl;
        std::cerr << "Accepted format:  \" n n s \" " << std::endl;
        return 1; 
    }
    try{
        
        std::list<char> input;
        std::string arg = arv[1];
        
        for(size_t i = 0;i < arg.size();i++){
            if (arg[i] == ' ')
                continue;
            input.push_back(arg[i]);
        }
        
        if (input.empty()){
            std::cerr << "Error: Not enough arguments." << std::endl;
            std::cerr << "n: [0123456789]" << std::endl;
            std::cerr << "s: [+-*/]" << std::endl;
            std::cerr << "Accepted format:  \" n n s \" " << std::endl;
            return 1;   
        }
        
        RPN rpn(input);
        int result = rpn.parseInput();
        std::cout <<  "= "<< result << std::endl;
    }
    catch(std::runtime_error &e){
        
        std::cerr << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}