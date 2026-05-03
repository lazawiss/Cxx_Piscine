/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:07:34 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/16 16:41:29 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <stdlib.h>
#include "Array.hpp"
#define MAX_VAL 750

int main( void ){
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 1\033[0m\n";
    Array<int> first(3);
    unsigned int len = first.size();
    std::cout << "length of First: " << len << std::endl;

    try{
        first[0] = 5;
        first[1] = 2;
        first[2] = -45;
        
        std::cout << "first[0]: " << first[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << ": Index out of range\n" << '\n';
    }
    std::cout << '\n';

    std::cout << "◽" << "\033[38;2;252;144;3mTEST 2\033[0m\n";
    try{
        Array<int> second = first; 
        int len2 = first.size();
        std::cout << "length of Second: " << len2 << std::endl;
        std::cout << "second[0]: " << second[2] << std::endl;
    }
    catch(const std::bad_alloc & e)
    {
        std::cerr << e.what() << ": Error Allocation\n" << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << ": Index out of range\n" << '\n';
    }
    std::cout << '\n';

    std::cout << "◽" << "\033[38;2;252;144;3mTEST 3\033[0m\n";
    int * a = new int(5);
    std::cout << "a: " << *(a) << std::endl;
    std::cout << '\n';
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 4\033[0m\n";
    try{
        Array<int> third(10);
        std::cout << "length of Third: " << third.size() << std::endl;
    }
    catch(const std::bad_alloc & e)
    {
        std::cerr << e.what() << ": Error Allocation\n" << '\n';
    }
    std::cout << '\n';
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 5\033[0m\n";
    try{
        Array<std::string> fourth(10);
        std::cout << "length of Fourth: " << fourth.size() << std::endl;
        fourth[0] = "hello";
        fourth[1] = "world";
        fourth[6] = "!";
        fourth[9] = "ugh";
        for (unsigned int i = 0; i < fourth.size(); i++){
            
            std::cout << "fourth[" << i << "]: " << fourth[i] << std::endl;
        }
    }
    catch(const std::bad_alloc & e)
    {
        std::cerr << e.what() << ": Error Allocation\n" << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << ": Index out of range\n" << '\n';
    }
    std::cout << '\n';
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 6\033[0m\n";
    try{
        first[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << ": Index out of range\n" << '\n';
    }
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 7\033[0m\n";
    try
    {
        first[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << ": Index out of range\n" << '\n';
    }
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 8\033[0m\n";
    Array<int> fifth(0);
    unsigned int len3 = fifth.size();
    std::cout << "length of Fifth: " << len3 << std::endl;

    try{
        fifth[0] = 5;
        fifth[1] = 2;
        fifth[2] = -45;
        
        std::cout << "fifth[0]: " << fifth[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << ": Index out of range\n" << '\n';
    }
    std::cout << '\n';

    std::cout << "◽" << "\033[38;2;252;144;3mTEST 9\033[0m\n";
    try{
        Array<int> sixth = fifth; 
        int len4 = sixth.size();
        std::cout << "length of Sixth: " << len4 << std::endl;
        std::cout << "second[0]: " << sixth[2] << std::endl;
    }
    catch(const std::bad_alloc & e)
    {
        std::cerr << e.what() << ": Error Allocation\n" << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << ": Index out of range\n" << '\n';
    }
    std::cout << '\n';

    std::cout << "◽" << "\033[38;2;252;144;3mTEST 10\033[0m\n";
    Array<double> seventh(5);
    unsigned int len5 = seventh.size();
    std::cout << "length of Seventh: " << len5 << std::endl;

    try{
        seventh[0] = 6.2;
        seventh[3] = 0.2;
        seventh[4] = -4.685;
        
        std::cout << "fifth[0]: " << seventh[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << ": Index out of range\n" << '\n';
    }
    std::cout << '\n';

    std::cout << "◽" << "\033[38;2;252;144;3mTEST 11\033[0m\n";
    try{
        Array<double> eighth = seventh; 
        int len6 = eighth.size();
        std::cout << "length of Eighth: " << len6 << std::endl;
        std::cout << "eighth[3]: " << eighth[3] << std::endl;
    }
    catch(const std::bad_alloc & e)
    {
        std::cerr << e.what() << ": Error Allocation\n" << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << ": Index out of range\n" << '\n';
    }
    std::cout << '\n';
    delete a;
    return 0;
}

// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << ": Index out of range\n" << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << ": Index out of range\n" << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//         // std::cout << numbers[i] << std::endl;
//     }
//     delete [] mirror;//
//     return 0;
// }