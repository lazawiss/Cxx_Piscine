/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:18:44 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/13 19:03:01 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"



int main( void ){

    
    {
        std::cout << "◽" << "\033[38;2;252;144;3mTEST 1\033[0m\n";
        int arr_int[] = {1,2,3};
        size_t length = sizeof(arr_int) / sizeof(arr_int[0]);
        
        std::cout << '\n';
        
        ::iter(arr_int, length, ::print_array);
        std::cout << '\n';

        ::iter(arr_int, length, ::foo);
        
        ::iter(arr_int, length, ::print_array);
        std::cout << '\n';

    }
    {
        std::cout << "◽" << "\033[38;2;252;144;3mTEST 2\033[0m\n";
        char arr_char[] = {'a','b','c'};
        size_t length = sizeof(arr_char) / sizeof(arr_char[0]);
        
        std::cout << '\n';
        
        ::iter(arr_char, length, ::print_array);
        std::cout << '\n';
        
        ::iter(arr_char, length, ::foo);
        
        ::iter(arr_char, length, ::print_array);
        std::cout << '\n';
    }
    {
        std::cout << "◽" << "\033[38;2;252;144;3mTEST 3\033[0m\n";
        int arr_int[] = {-50,-51,-52,-53,-54};
        size_t length = sizeof(arr_int) / sizeof(arr_int[0]);
        
        std::cout << '\n';
        
        ::iter(arr_int, length, ::print_array);
        std::cout << '\n';

        ::iter(arr_int, length, ::foo);
        
        ::iter(arr_int, length, ::print_array);
        std::cout << '\n';
    }
    {
        std::cout << "◽" << "\033[38;2;252;144;3mTEST 4\033[0m\n";
        int const arr_int[] = {0,0,0,0};
        size_t length = sizeof(arr_int) / sizeof(arr_int[0]);
        
        std::cout << '\n';
        
        ::iter(arr_int, length, ::print_array);
        
        std::cout << '\n';
       
    }
    {
        std::cout << "◽" << "\033[38;2;252;144;3mTEST 5\033[0m\n";
        int const arr_empty[] = {};
        size_t length = sizeof(arr_empty) / sizeof(arr_empty[0]);
        
        std::cout << '\n';
        
        ::iter(arr_empty, length, ::print_array);
        
        std::cout << '\n';
    }
    {
        std::cout << "◽" << "\033[38;2;252;144;3mTEST 6\033[0m\n";
        int const arr_int[] = {42};
        size_t length = sizeof(arr_int) / sizeof(arr_int[0]);
        
        std::cout << '\n';
        
        ::iter(arr_int, length, ::print_array);
        
        std::cout << '\n';
    }
    {
        std::cout << "◽" << "\033[38;2;252;144;3mTEST 7\033[0m\n";
        int const *arr_empty = NULL;
        
        std::cout << '\n';
        
        ::iter(arr_empty, 5, ::print_array);
        
        std::cout << '\n';
    }
    {
        std::cout << "◽" << "\033[38;2;252;144;3mTEST 8\033[0m\n";
        double arr_double[] = {-50.85,-51.4,-52.96,-53.451,-54.025};
        size_t length = sizeof(arr_double) / sizeof(arr_double[0]);
        
        std::cout << '\n';
        
        ::iter(arr_double, length, ::print_array);
        std::cout << '\n';

        ::iter(arr_double, length, ::foo);
        
        ::iter(arr_double, length, ::print_array);
        std::cout << '\n';
    }
    {
        std::cout << "◽" << "\033[38;2;252;144;3mTEST 9\033[0m\n";
        std::string const arr_char[] = {"hello","world","!"};
        size_t length = sizeof(arr_char) / sizeof(arr_char[0]);
        
        std::cout << '\n';
        
        ::iter(arr_char, length, ::print_array);
        std::cout << '\n';
    }
    {
        std::cout << "◽" << "\033[38;2;252;144;3mTEST 10\033[0m\n";
        int arr_int[] = {1,2,3};
        size_t length = sizeof(arr_int) / sizeof(arr_int[0]);
        
        std::cout << '\n';
        
        ::iter(arr_int, length, ::print_array);
        std::cout << '\n';

        ::iter(arr_int, length, ::multiply_by_two);
        
        ::iter(arr_int, length, ::print_array);
        std::cout << '\n';

    }
    
    return 0;
}