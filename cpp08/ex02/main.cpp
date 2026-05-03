/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:06:28 by lzannis           #+#    #+#             */
/*   Updated: 2026/04/25 21:46:26 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"

int main() {
    
    {
        std::cout << "◈" << "\033[0;38;2;189;252;201mPERSONNALIZED CONTAINER MUTANTSTACK\033[0m\n";
        
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        
        std::cout << "top: " << mstack.top() << std::endl;
        
        mstack.pop();
        
        std::cout << "size: " << mstack.size() << std::endl;
        
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        
        ++it;
        --it;
        
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::cout << '\n';
        std::cout << "TEST CONST" << std::endl;
        

        MutantStack<int>::const_iterator it1 = mstack.cbegin();
        MutantStack<int>::const_iterator ite1 = mstack.cend();
        
        ++it1;
        --it1;
        
        while (it1 != ite1)
        {
            std::cout << *it1 << std::endl;
            ++it1;
        }
        std::cout << '\n';
        std::cout << "TEST REVERSE" << std::endl;
        
        MutantStack<int>::reverse_iterator it2 = mstack.rbegin();
        MutantStack<int>::reverse_iterator ite2 = mstack.rend();
        
        ++it2;
        --it2;
        
        while (it2 != ite2)
        {
            std::cout << *it2 << std::endl;
            ++it2;
        }
         std::cout << '\n';
        std::cout << "TEST CONST REVERSE" << std::endl;
        
        MutantStack<int>::const_reverse_iterator it3 = mstack.crbegin();
        MutantStack<int>::const_reverse_iterator ite3 = mstack.crend();
        
        ++it3;
        --it3;
        
        while (it3 != ite3)
        {
            std::cout << *it3 << std::endl;
            ++it3;
        }
        
        std::stack<int> s(mstack);// doit compiler avec cette ligne
    }
    std::cout << '\n';
    
    {
        std::cout << "◈" << "\033[0;38;2;189;252;201mCONTAINER LIST\033[0m\n";
        
        std::list<int> list;
        list.push_back(5);
        list.push_back(17);
        
        std::cout << "top: " << list.back() << std::endl;
        
        list.pop_back();
        
        std::cout << "size: " << list.size() << std::endl;
        
        list.push_back(3);
        list.push_back(5);
        list.push_back(737);
        list.push_back(0);
        std::list<int>::iterator it = list.begin();
        std::list<int>::iterator ite = list.end();

        
        ++it;
        --it;
        
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
            std::cout << '\n';
        std::cout << "TEST CONST" << std::endl;
        

        std::list<int>::const_iterator it1 = list.begin();
        std::list<int>::const_iterator ite1 = list.end();
        
        ++it1;
        --it1;
        
        while (it1 != ite1)
        {
            std::cout << *it1 << std::endl;
            ++it1;
        }
        std::cout << '\n';
        std::cout << "TEST REVERSE" << std::endl;
        
        std::list<int>::reverse_iterator it2 = list.rbegin();
        std::list<int>::reverse_iterator ite2 = list.rend();
        
        ++it2;
        --it2;
        
        while (it2 != ite2)
        {
            std::cout << *it2 << std::endl;
            ++it2;
        }
        std::cout << '\n';
        std::cout << "TEST CONST REVERSE" << std::endl;
        
        std::list<int>::const_reverse_iterator it3 = list.rbegin();
        std::list<int>::const_reverse_iterator ite3 = list.rend();
        
        ++it3;
        --it3;
        
        while (it3 != ite3)
        {
            std::cout << *it3 << std::endl;
            ++it3;
        }
        
    }
    
    return 0;
}