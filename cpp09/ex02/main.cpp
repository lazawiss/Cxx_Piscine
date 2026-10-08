/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:28:34 by lzannis           #+#    #+#             */
/*   Updated: 2026/10/06 21:56:43 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::string & getCin(std::string & data){
 
        getline(std::cin,data);
        if (std::cin.fail()){
            std::cerr << "Error: no arguments." << std::endl;
            exit(EXIT_FAILURE);
        }
        return data;
}

bool processData(std::string & data, std::vector<std::string> & vecstr){
    
    clock_t startTimeVec, endTimeVec,startTimeDeq, endTimeDeq;
    PmergeMe p;
    std::vector<int> vec;
    std::deque<int> deq;
    size_t start = 0;
    std::stringstream ss;
    if (!data.empty()){
        
        for (size_t i = 0; i < data.size(); i++){
            if (data[i] == ' '){
                start = i;
                continue;
            }
            size_t j = i;
            while(data[j] != ' ' && isdigit(data[j])){
                j++;
            }
            size_t end = j;
            std::string num = data.substr(start, end-start);

            if (num.empty()){
                continue;
            }
            ss << num;
            ssize_t nb = 0;
            ss >> nb;
            if (nb <= 0){
                std::cerr << "Error: invalid input." << std::endl;
                return false;
            }
            if (nb > INT_MAX){
                std::cerr << "Error: number is too high." << std::endl;
                return false;
            }
            vec.push_back(nb);
            deq.push_back(nb);
            ss.clear();
            start = end;
        }
    }
    else{
         
        for (size_t i = 0; i < vecstr.size(); i++){
          
            std::string num = vecstr[i];
            if (num.empty()){
                continue;
            }
            ss << num;
            ssize_t nb = 0;
            ss >> nb;
            if (nb < 0){
                std::cerr << "Error: integer is negativ." << std::endl;
                return false;
            }
            if (nb > INT_MAX){
                std::cerr << "Error: number is too high." << std::endl;
                return false;
            }
            vec.push_back(nb);
            deq.push_back(nb);
            ss.clear();
        }
    }
    
    if (vec.empty()){
        std::cerr << "Error: Vector is Empty." << std::endl;
        return false;
    }
    if (vec.size() < 2){
        std::cerr << "Error: Not enough value to sort." << std::endl;
        return false;
    }
    if (deq.empty()){
        std::cerr << "Error: Deque is Empty." << std::endl;
        return false;
    }
    if (deq.size() < 2){
        std::cerr << "Error: Not enough value to sort." << std::endl;
        return false;
    }
    
    std::multiset<int> multi1(vec.begin(), vec.end());
    std::cout << "Before sort: " << std::endl;
    p.printVec(vec,vec.size());

    startTimeVec = clock();
    p.fordJohnsonVec(vec);
    endTimeVec = clock();
    std::multiset<int> multi2(vec.begin(), vec.end());

    startTimeDeq = clock();
    p.fordJohnsonDeq(deq);
    endTimeDeq = clock();
    
    std::cout << "After sort: " << std::endl;
    p.printVec(vec,vec.size());

    // std::cout << "After sort deque: " << std::endl;
    // p.printDeque(deq,deq.size());
    // std::cout << std::endl;

    double timeTakenVec = double(endTimeVec - startTimeVec) / double(CLOCKS_PER_SEC);
    std::cout << "Time to process of a range of " << vec.size();
    std::cout << " elements with std::vector<int> : ";
    std::cout << std::fixed << timeTakenVec << std::setprecision(6); 
    std::cout << " sec" << std::endl;
    double timeTakenDeq = double(endTimeDeq - startTimeDeq) / double(CLOCKS_PER_SEC);
    std::cout << "Time to process of a range of " << deq.size();
    std::cout << " elements with std::deque<int>  : ";
    std::cout << std::fixed << timeTakenDeq << std::setprecision(6); 
    std::cout << " sec" << std::endl;


    std::cout << std::endl;
    if (multi1 != multi2)
        std::cout << "Missing elements or duplicates " << std::endl;
        
    p.checkVec(vec);
    p.checkDeq(deq);
    std::cout << std::endl;
    
    p.worstCaseCalculator(vec);

    std::cout << "Cost for vector: " << p.getCountVec() << std::endl;
    std::cout << "Cost for deque: " << p.getCountDeq() << std::endl;


    return true;
}

int main(int arc, char *arv[]){
    
    std::string data;
    std::vector<std::string> vecstr;
    std::ifstream ifs;
    if (arc > 2){
        for (int i = 1; i < arc; i++){
            vecstr.push_back(arv[i]);
        }
    }
    else if (arc == 2)
    {
        char *pos = strrchr(arv[1],'.');
        
        if (pos){
            
            ifs.open(arv[1]);
            if (!ifs.is_open()){
                std::cerr << "Error: could not open file." << std::endl;
                return 1;
            }
            getline(ifs,data);
            ifs.close();
        }
        else
            data = arv[1];
    }
    else{
        std::cerr << "Error: Nothing to sort." << std::endl;
        std::cerr << "Enter arguments or file." << std::endl;
        return 1;
    }

    if (processData(data, vecstr) == false)
        return 1;
        
    return 0;
}
