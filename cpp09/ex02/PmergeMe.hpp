/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leazannis <leazannis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:29:23 by lzannis           #+#    #+#             */
/*   Updated: 2026/09/22 23:53:55 by leazannis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <deque>
#include <set>
#include <vector>
#include <bits/stdc++.h>
#include <cstdio>
#include <ctime>

class PmergeMe{
    
private:

public:

            PmergeMe();
            PmergeMe(PmergeMe const & src);
            ~PmergeMe();
            PmergeMe & operator=(PmergeMe const & other);

    void    mergeVec(std::vector<int>::iterator left,
            std::vector<int>::iterator mid, std::vector<int>::iterator right);
    void    recursiveMergeSortVec(std::vector<int> &vec, std::vector<int>::iterator left,
            std::vector<int>::iterator right);
    void    binarySearch(std::vector<int> vec, size_t n);        
    void    insertionSort(std::vector<int> & vec,size_t n );
    void    printVec(std::vector<int> vec, size_t n);

    void    insertionSortDeque( std::deque<int> & vec,size_t n);
    void    printDeque(std::deque<int> vec, size_t n);

    


};

