/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:26:27 by lzannis           #+#    #+#             */
/*   Updated: 2026/10/02 16:13:27 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int arc, char *arv[] ){

    if (arc != 2){
        std::cerr << "Error: Wrong number of arguments." << std::endl;
        std::cerr << "number: [0123456789]" << std::endl;
        std::cerr << "sign: [+-*/]" << std::endl;
        std::cerr << "Accepted format:  \" number number sign \" " << std::endl;
        return 1; 
    }
    try{
        std::list<char> input;
        std::string arg = arv[1];
        size_t start = 0;
        std::stringstream ss;
        for(size_t i = 0;i < arg.size();i++){
            if (arg[i] == ' '){
                start = i;
                continue;
            }
            size_t j = i;
            while(arg[j] != ' ' && isdigit(arg[j])){
                j++;
            }
            size_t end = j;
            std::string num = arg.substr(start, end-start);
            if (num.empty()){
                continue;
            }
            ss.clear();
            ss << num;
            int nb = 0;
            ss >> nb;
            if (nb < 0 || nb > 9){
                std::cerr << "Error: Number too high or too low." << std::endl;
                return false;
            }
            input.push_back(arg[i]);
        }
        
        if (input.empty()){
            std::cerr << "Error: Not enough arguments." << std::endl;
            std::cerr << "number: [0123456789]" << std::endl;
            std::cerr << "sign: [+-*/]" << std::endl;
            std::cerr << "Accepted format:  \" number number sign \" " << std::endl;
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