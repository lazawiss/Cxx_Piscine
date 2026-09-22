/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leazannis <leazannis@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 19:08:42 by lzannis           #+#    #+#             */
/*   Updated: 2026/09/22 23:57:46 by leazannis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
    
}
 
PmergeMe::PmergeMe(PmergeMe const & src){
    
    *this = src;
}

PmergeMe::~PmergeMe(){
    
}

PmergeMe & PmergeMe::operator=(PmergeMe const & other){
    
    if (this != &other)
        *this = other;
    
    return *this;
}

void PmergeMe::insertionSort( std::vector<int> & vec,size_t n){

    for (size_t i = 1; i < n ; ++i){

        int key = vec[i];
        int j = i - 1;
        while( j >= 0 && vec[j] > key){
            vec[j + 1]  = vec[j];
            j = j - 1;
        }
        vec[j + 1] = key;
    }
    
}

//create temporary vector to sort subarrays
// copies back the result into vec through left iterator(vec.begin())
void    PmergeMe::mergeVec(std::vector<int>::iterator left,
     std::vector<int>::iterator mid,std::vector<int>::iterator right)
{
    std::vector<int> temp;
    temp.reserve(right - left);
    
    std::vector<int>::iterator i = left;
    std::vector<int>::iterator j = mid;
    
    while(i != mid && j != right){
        if (*i <= *j){
            temp.push_back(*i);
            i++;
        }
        else{
            temp.push_back(*j);
            j++;
        }
    }
    
    while (i != mid){
        temp.push_back(*i);
        i++;
    }
    
    while(j != right){
        temp.push_back(*j);
        j++;
    }
    
    if (temp.size() != static_cast<size_t>(right - left)) {
        std::cout << "ERROR: temp.size() != right - left" << std::endl;
        return;
    }
   
    std::copy(temp.begin(),temp.end(), left);
}
//separate array in half, until smallest unit possible (= 1)  
void    PmergeMe::recursiveMergeSortVec(std::vector<int> & vec, std::vector<int>::iterator left,
    std::vector<int>::iterator right){
    
    if (right - left <= 1)
        return;
    
    std::vector<int>::iterator mid = left + (right - left) / 2;
    recursiveMergeSortVec(vec, left, mid);
    recursiveMergeSortVec(vec, mid, right);
    
    mergeVec(left,mid,right);

}

//void    PmergeMe::binarySearch(std::vector<int> vec, size_t n){
    
//}  
    
void    PmergeMe::printVec(std::vector<int> vec, size_t n){

    for (size_t i = 0; i < n;++i){
        std::cout << vec[i] << " "; 
    }
    std::cout << std::endl;
}


void PmergeMe::insertionSortDeque( std::deque<int> & deq,size_t n){

    for (size_t i = 1; i < n ; ++i){

        int key = deq[i];
        int j = i - 1;
        while( j >= 0 && deq[j] > key){
            deq[j + 1]  = deq[j];
            j = j - 1;
        }
        deq[j + 1] = key;
    }
    
}

void    PmergeMe::printDeque(std::deque<int> deq, size_t n){

    for (size_t i = 0; i < n;++i){
        std::cout << deq[i] << " "; 
    }
    std::cout << std::endl;
}