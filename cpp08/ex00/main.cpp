/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 17:34:08 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/19 16:59:44 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void ){
    
    std::cout << "◈" << "\033[0;38;2;189;252;201mCONTAINER LIST\033[0m\n";

    std::list<int> lst;
    
    lst.push_back(45);
    lst.push_back(12);
    lst.push_back(85);
    lst.push_back(3000);

    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 1\033[0m\n";
    easyfind(lst, 12);
    std::cout << '\n';
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 2\033[0m\n";
    easyfind(lst, 0);
    std::cout << '\n';
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 3\033[0m\n";
    easyfind(lst, 85);
    std::cout << '\n';
    
    std::cout << "◈" << "\033[0;38;2;189;252;201mCONTAINER VECTOR\033[0m\n";

    std::vector<int> vec;
    
    vec.push_back(45);
    vec.push_back(12);
    vec.push_back(85);
    vec.push_back(3000);
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 1\033[0m\n";
    easyfind(vec, 12);
    std::cout << '\n';
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 2\033[0m\n";
    easyfind(vec, 0);
    std::cout << '\n';
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 3\033[0m\n";
    easyfind(vec, 85);
    std::cout << '\n';
    

    std::cout << "◈" << "\033[0;38;2;189;252;201mCONTAINER DEQUE\033[0m\n";

    std::deque<int> deq;
    
    deq.push_back(45);
    deq.push_back(12);
    deq.push_back(85);
    deq.push_back(3000);
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 1\033[0m\n";
    easyfind(deq, 12);
    std::cout << '\n';
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 2\033[0m\n";
    easyfind(deq, 0);
    std::cout << '\n';
    
    std::cout << "◽" << "\033[38;2;252;144;3mTEST 3\033[0m\n";
    easyfind(deq, 85);
    std::cout << '\n';

    return 0;
}