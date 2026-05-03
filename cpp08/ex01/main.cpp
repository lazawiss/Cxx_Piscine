/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 19:35:19 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/26 14:53:38 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int     randNumGen(int min, unsigned int max){

    int fd = open("/dev/urandom", O_RDONLY);
    if (fd < 0)
        return 0;

    int rd_num = 0; 
    ssize_t bytes_read = read(fd, &rd_num, sizeof(rd_num));
    if (bytes_read != sizeof(rd_num))
        return 0;

    int range = max - min + 1;
    int result = abs(rd_num) % range; 

    close(fd);

    return min + result;
}


int main()
{
    Span sp = Span(5);
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 1\033[0m\n";

    try{
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.printV();
        std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp.longestSpan() << std::endl;
    }
    catch( std::exception & e){
        
        std::cout << e.what() << std::endl;
    }
    std::cout <<'\n';
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 2\033[0m\n";
    try{
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(12);
        sp.printV();
        std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp.longestSpan() << std::endl;
    }
    catch( std::exception & e){
        
        std::cout << e.what() << std::endl;
    }
    std::cout <<'\n';

    std::cout << "◽" << "\033[38;2;252;144;3mTEST 3\033[0m\n";
    Span sp1(10);
    try{
        int arr[] = {1,5,8,9,6,75};
        std::vector<int> vec1(arr, arr + sizeof(arr) / sizeof(arr[0]));
        sp1.fillArray(vec1.begin(), vec1.end());
        sp1.addNumber(11);
        sp1.addNumber(12);
        sp1.addNumber(132);
        sp1.addNumber(22);
        sp1.printV();
        std::cout << "shortest span:" << sp1.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp1.longestSpan() << std::endl;
    }
    catch( std::exception & e){
        
        std::cout << e.what() << std::endl;
    }
    std::cout <<'\n';


    std::cout << "◽" << "\033[38;2;252;144;3mTEST 4\033[0m\n";
    Span sp2(10);
    try{
        int arr[] = {1,5,8,9,6,75};
        std::vector<int> vec1(arr, arr + sizeof(arr) / sizeof(arr[0]));
        sp2.fillArray(vec1.begin(), vec1.end());
        sp2.addNumber(11);
        sp2.addNumber(12);
        sp2.addNumber(132);
        sp2.addNumber(22);
        sp2.addNumber(42);
        sp2.addNumber(52);
        sp2.printV();
        std::cout << "shortest span:" << sp2.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp2.longestSpan() << std::endl;
    }
    catch( std::exception & e){
        
        std::cout << e.what() << std::endl;
    }
    std::cout <<'\n';
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 5\033[0m\n";
    Span sp3(10050);
    try{
        int size = 10000;
        int arr[size];
        for (int i = 0; i < size; i++){
            arr[i] = randNumGen(0,10000);
        }
        std::vector<int> vec2(arr, arr + sizeof(arr) / sizeof(arr[0]));
        sp3.fillArray(vec2.begin(), vec2.end());
        // sp2.printV();
        std::cout << "shortest span:" << sp3.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp3.longestSpan() << std::endl;
    }
    catch( std::exception & e){
        
        std::cout << e.what() << std::endl;
    }
    std::cout <<'\n';
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 6\033[0m\n";
    Span sp4(10050);
    try{
        unsigned int size = 100000;
        unsigned int arr[size] ;
        for (unsigned int i = 0; i < size; ++i){
            arr[i] = randNumGen(0,10000);
        }
        std::vector<int> vec2(arr, arr + sizeof(arr) / sizeof(arr[0]));
        sp4.fillArray(vec2.begin(), vec2.end());
        // sp2.printV();
        std::cout << "shortest span:" << sp4.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp4.longestSpan() << std::endl;
    }
    catch( std::exception & e){
        
        std::cout << e.what() << std::endl;
    }
    std::cout <<'\n';
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 7\033[0m\n";
    try{
        Span sp5(0);
        sp5.addNumber(1);
        sp5.printV();
        std::cout << "shortest span:" << sp5.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp5.longestSpan() << std::endl;
    }
    catch( std::exception & e){
        
        std::cout << e.what() << std::endl;
    }
    std::cout <<'\n';
    

    return 0;
}