/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:29:23 by lzannis           #+#    #+#             */
/*   Updated: 2026/10/06 21:49:13 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
#include <math.h>


class PmergeMe{
    
private:

    std::vector<int>    _bigger;
    std::vector<size_t> _indexBigger;
    std::vector<int>    _smaller;
    std::vector<size_t> _indexSmaller;
    
    std::deque<int>     _big;
    std::deque<size_t>  _indexBig;
    std::deque<int>     _small;
    std::deque<size_t>  _indexSmall;

    int                 _countVec;
    int                 _countDeq;



public:

            	PmergeMe();
            	PmergeMe(PmergeMe const & src);
            	~PmergeMe();
            	PmergeMe & operator=(PmergeMe const & other);

    int         getCountVec() const;
    int         getCountDeq() const;
                
    void        sortBigger(std::vector<int> &vec, std::vector<size_t> &idx);
    void    	sortPairs(std::vector<int> & vec);
    void		jacobsthalOrder(std::vector<int> &small, std::vector<int> & bigger);
    void    	fordJohnsonVec(std::vector<int> & vec);
    void    	binarySearch(std::vector<int> &vec, std::vector<size_t> &idx, int target, size_t index, size_t winnerId);
    void        checkVec(std::vector<int> & vec);
    void    	printVec(std::vector<int> & vec, size_t n);
    
    void        sortBiggerDeq(std::deque<int> & deq, std::deque<size_t> & idx);
    void        sortPairsDeq(std::deque<int> & deq);
    void        jacobsthalOrderDeq(std::deque<int> &small, std::deque<int> & bigger);
    void        fordJohnsonDeq(std::deque<int> & deq);
    void        binarySearchDeq(std::deque<int> &deq, std::deque<size_t> &idx, int target, size_t index, size_t winnerId);
    void        checkDeq(std::deque<int> & deq);
    void    	printDeque(std::deque<int>& vec, size_t n);
    
    void        worstCaseCalculator(std::vector<int> & vec);    
};
