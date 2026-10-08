/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 19:08:42 by lzannis           #+#    #+#             */
/*   Updated: 2026/10/06 21:49:32 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _countVec(0),_countDeq(0){
    
}
 
PmergeMe::PmergeMe(PmergeMe const & src) : _bigger(src._bigger),_indexBigger(src._indexBigger),
_smaller(src._smaller), _indexSmaller(src._indexSmaller), _big(src._big), _indexBig(src._indexBig),
_small(src._small), _indexSmall(src._indexSmall), _countVec(src._countVec), _countDeq(src._countDeq){
    
}

PmergeMe::~PmergeMe(){
    
}

PmergeMe & PmergeMe::operator=(PmergeMe const & other){
    
    if (this != &other){
        this->_bigger = other._bigger;\
        this->_indexBigger = other._indexBigger;
        this->_smaller = other._smaller;
        this->_indexSmaller = other._indexSmaller;
        this->_big = other._big;
        this->_indexBig = other._indexBig;
        this->_small = other._small;
        this->_indexSmall = other._indexSmall;
        this->_countVec = other._countVec;
        this->_countDeq = other._countDeq;
    }
    
    return *this;
}

int PmergeMe::getCountVec() const{

    return _countVec;
}

int PmergeMe::getCountDeq() const{
    
    return _countDeq;
}

//-------------------------------------------------------------------------------
//    VECTOR
//-------------------------------------------------------------------------------

void PmergeMe::sortBigger(std::vector<int> &vec, std::vector<size_t> &idx){

    if (vec.size() <= 1)
        return;

    bool    hasHold = false;    
    int     hold = 0;
    size_t  indxHold = 0;
    if (vec.size() % 2 != 0){
        hold = *(vec.end() - 1);
        indxHold = *(idx.end() - 1);
        vec.pop_back();
        idx.pop_back();
        hasHold = true;
    }
    
    std::vector<int> temp;
    std::vector<size_t> indextemp;
    std::vector<int> small;
    std::vector<size_t> indexsmall;
    std::vector<size_t> winner;

    
    for( size_t i = 0;i < vec.size(); (i += 2)){
        size_t j = i + 1;
        if(j >= vec.size())
            break;
        _countVec++;
            
        if (vec[i] > vec[j]){
            temp.push_back(vec[i]);
            indextemp.push_back(idx[i]);
            small.push_back(vec[j]);
            indexsmall.push_back(idx[j]);
            winner.push_back(idx[i]);
        }
        else{
            temp.push_back(vec[j]);
            indextemp.push_back(idx[j]);
            small.push_back(vec[i]);
            indexsmall.push_back(idx[i]);
            winner.push_back(idx[j]);
        } 
    }
    sortBigger(temp, indextemp);
    
    if (hasHold == true){
        small.insert(small.end(), hold);
        indexsmall.insert(indexsmall.end(), indxHold);
        winner.push_back(2147483649);
    }
    
    //store size of indextemp to track pending later
    size_t m = indextemp.size();

    std::vector<size_t> rankToPend(indextemp.size());
    for (size_t r = 0; r < indextemp.size(); r++){
        for (size_t j = 0; j < small.size(); j++){
            if (winner[j] == indextemp[r]){
                rankToPend[r] = j;
                break;
            }
        }
    }
  
    //start by inserting smaller number/index found with ranktoPend
    // create Jacobsthal Order (1,1,3,5,11...)
    // insert small in big by group following this order
    temp.insert(temp.begin(), small[rankToPend[0]]);
    indextemp.insert(indextemp.begin(), indexsmall[rankToPend[0]]);
    size_t nbToInsert = small.size();
    size_t count = 1;
    size_t prevPrev= 1;
    size_t prev = 3;
    while (count < nbToInsert){
        size_t hi = prev;
        if (hi > small.size())
            hi = small.size();
        for (size_t p = hi; p > prevPrev && count < nbToInsert; p--){
            size_t pos;
            if (p == m + 1)
                pos = small.size() - 1;
            else
                pos = rankToPend[p - 1];
            binarySearch(temp, indextemp, small[pos], indexsmall[pos], winner[pos]);
            count++;
        }
        size_t siz = prev + (2 * prevPrev);
        prevPrev = prev;
        prev = siz;
    }

    vec = temp;
    idx = indextemp;
}

void PmergeMe::sortPairs(std::vector<int> & vec){
    
    std::vector<int>::iterator leftVec = vec.begin();
    std::vector<int>::iterator rightVec = (vec.begin() + 1);

    for(;leftVec != vec.end() && rightVec != vec.end();leftVec += 2, rightVec += 2){
        _countVec++;
        int nb = (*leftVec > *rightVec ? *leftVec : *rightVec);
        if (*leftVec > *rightVec){
            size_t indxBig = distance(vec.begin(),leftVec);
            _indexBigger.push_back(indxBig);
            _smaller.push_back(*rightVec);
            _indexSmaller.push_back(indxBig);
        }
        else{
            size_t indxBig = distance(vec.begin(),rightVec);
            _indexBigger.push_back(indxBig);
            _smaller.push_back(*leftVec);
            _indexSmaller.push_back(indxBig);
        }
            
        _bigger.push_back(nb);
    }
}

void PmergeMe::jacobsthalOrder(std::vector<int> &small, std::vector<int> & bigger){
    
    if (small.empty() || bigger.empty())
        return;

    //create & store Jacobstahl Order in Index
    std::vector<size_t> index;
    size_t siz = 0;
    size_t prev = 0;
    size_t prevprev = 0;
    index.push_back(0);
    index.push_back(1);
    for (size_t i = 2; i <= small.size(); i++){
        prev = index[i - 1];
        prevprev = index[i - 2];
        siz = prev + (2 * prevprev);
        index.push_back(siz);
    }

    bool    hasHold = false;    
    int     hold = 0;
    size_t  indxHold = 0;
    size_t  smallsiz = small.size();
    if (small.size() > bigger.size()){
        hold = *(small.end() - 1);
        indxHold = *(_indexSmaller.end() - 1);
        small.pop_back();
        _indexSmaller.pop_back();
        hasHold = true;
    }
  
    std::vector<size_t> rankToPend(small.size());
    for (size_t r = 0; r < _indexBigger.size(); r++){
        for (size_t j = 0; j < _indexSmaller.size(); j++){
            if (_indexSmaller[j] == _indexBigger[r]){
                rankToPend[r] = j;
                break;
            }
        }
    }
    if (hasHold == true){
        small.insert(small.end(), hold);
        _indexSmaller.insert(_indexSmaller.end(), indxHold);
        rankToPend.insert(rankToPend.end(), smallsiz - 1);
    }

    // place it at index found in vector<>index then decremente
    // jn = jn - 1 + 2.jn - 2
    size_t count = 1;
    bigger.insert(bigger.begin(), small[rankToPend[0]]);
    _indexBigger.insert(_indexBigger.begin(), _indexSmaller[rankToPend[0]]);
    for (size_t i = 1; i < index.size() && count < small.size(); i++){
        size_t stop = index[i - 1];
        size_t it  = index[i];
        if ( it >= small.size()){
            it = small.size() - 1;
        }
        for (size_t j = it;j > stop; j--){
            size_t idx = rankToPend[j];
            binarySearch(bigger, _indexBigger, small[idx], _indexSmaller[idx], _indexSmaller[idx]);
            count++;
            if (count == small.size()){
                return;
            }
        }
    }
}

void    PmergeMe::fordJohnsonVec(std::vector<int> & vec){
    
    bool hasHold = false;
    size_t len = vec.size();
    if (len < 3){
        if (vec[0] > vec[1]){
            int temp = vec[1];
            vec[1] = vec[0];
            vec[0] = temp;
        }
        if (vec[0] == vec[1]){
            return;
        }
        return;
    }
        
    int hold = 0;
    if (len % 2 != 0){
        hold = *(vec.end() - 1);
        vec.pop_back();
        hasHold = true;
    }
        
    sortPairs(vec);
   
    if (hasHold == true){
        _smaller.push_back(hold);
        _indexSmaller.push_back(len - 1);
    }
    if (len == 3){
        _bigger.insert(_bigger.begin(), _smaller[0]);
        binarySearch(_bigger, _indexBigger, _smaller[1],_indexSmaller[1], _indexSmaller[1]);
        vec = _bigger;
        return;
    }

    sortBigger(_bigger, _indexBigger);

    jacobsthalOrder(_smaller, _bigger);

    vec = _bigger;
}

void    PmergeMe::binarySearch(std::vector<int> &vec,std::vector<size_t> &idx, int target, size_t index, size_t winnerId){
  
    ssize_t marker = -1;
    for (size_t i = 0; i < idx.size();i++){
        if (idx[i] == winnerId ){
            marker = i;
            break;
        }
    }
    
    std::vector<int>::iterator i = vec.begin();
    std::vector<int>::iterator j;
    if ( marker == -1)
        j = vec.end() - 1;
    else if (marker == 0){
        vec.insert(vec.begin(), target);
        idx.insert(idx.begin(), index);
        return;
    }
    else
        j = (vec.begin() + marker - 1);
          
    while(i <= j){
        std::vector<int>::iterator mid = i + (j - i) / 2;
        _countVec++;
        if (*mid <= target){
            i = mid + 1;
        }
        else if (*mid > target)
            j = mid - 1;
    }
    if (i == vec.end()){
        vec.insert(vec.end(), target);
        idx.insert(idx.end(), index);
        return;
    }
    size_t id = distance(vec.begin(),i);
    vec.insert(vec.begin() + id, target);
    idx.insert(idx.begin() + id, index);
 }  
 
//C(n) = Σ ⌈log₂(3i/4)⌉
void    PmergeMe::worstCaseCalculator(std::vector<int> & vec){
    
    size_t k = 0; 
    ssize_t p = 4, result = 0;
    for (ssize_t i = 1; i <= static_cast<ssize_t>(vec.size()); i++){
        if (p < (i * 3)){
           
            k++;
            p *= 2;
        }
        result += k;
    }
    
    std::cout << "Worst Case :" <<  result << std::endl;
}

void    PmergeMe::checkVec(std::vector<int> & vec){
    size_t i = 0;
    for (size_t j = i + 1; j < vec.size() && i < vec.size() ; i++, j++){
        if (vec[i] > vec[j]){
            std::cout << "Sort Vector : Sort Failed." << std::endl;
            return;
        }
    }
    std::cout << "Sort Vector : Sort Success." << std::endl;
    
}

void    PmergeMe::printVec(std::vector<int> & vec, size_t n){

    for (size_t i = 0; i < n;++i){
        std::cout << vec[i] << " "; 
    }
    std::cout << std::endl;
}

//-------------------------------------------------------------------------------
//    DEQUE
//-------------------------------------------------------------------------------


void PmergeMe::sortBiggerDeq(std::deque<int> & deq, std::deque<size_t> & idx){

    if (deq.size() <= 1)
        return;
    
    bool    hasHold = false;    
    int     hold = 0;
    size_t  indxHold = 0;
    if (deq.size() % 2 != 0){
        hold = *(deq.end() - 1);
        indxHold = *(idx.end() - 1);
        deq.pop_back();
        idx.pop_back();
        hasHold = true;
    }
    
    std::deque<int>     temp;
    std::deque<size_t>  indextemp;
    std::deque<int>     small;
    std::deque<size_t>  indexsmall;
    std::deque<size_t>  winner;

    for( size_t i = 0;i < deq.size(); (i += 2)){
        size_t j = i + 1;
        if(j >= deq.size())
            break;
        _countDeq++;
        if (deq[i] > deq[j]){
            temp.push_back(deq[i]);
            indextemp.push_back(idx[i]);
            small.push_back(deq[j]);
            indexsmall.push_back(idx[j]);
            winner.push_back(idx[i]);
        }
        else{
            temp.push_back(deq[j]);
            indextemp.push_back(idx[j]);
            small.push_back(deq[i]);
            indexsmall.push_back(idx[i]);
            winner.push_back(idx[j]);
        } 
    }
    sortBiggerDeq(temp, indextemp);
    
    if (hasHold == true){
        small.insert(small.end(), hold);
        indexsmall.insert(indexsmall.end(), indxHold);
        winner.push_back(2147483649);
    }

    size_t m = indextemp.size();

    std::deque<size_t> rankToPend(indextemp.size());
    for (size_t r = 0; r < indextemp.size(); r++){
        for (size_t j = 0; j < small.size(); j++){
            if (winner[j] == indextemp[r]){
                rankToPend[r] = j;
                break;
            }
        }
    }
    
    temp.insert(temp.begin(), small[rankToPend[0]]);
    indextemp.insert(indextemp.begin(), indexsmall[rankToPend[0]]);
    size_t nbToInsert = small.size();
    size_t count = 1;
    size_t prevPrev= 1;
    size_t prev = 3;
    while (count < nbToInsert){
        size_t hi = prev;
        if (hi > small.size())
            hi = small.size();
        for (size_t p = hi; p > prevPrev && count < nbToInsert; p--){
            size_t pos;
            if (p == m + 1)
                pos = small.size() - 1;
            else
                pos = rankToPend[p - 1];
            binarySearchDeq(temp, indextemp, small[pos], indexsmall[pos], winner[pos]);
            count++;
        }
        size_t siz = prev + (2 * prevPrev);
        prevPrev = prev;
        prev = siz;
    }
    
    deq = temp;
    idx = indextemp;
}

void    PmergeMe::sortPairsDeq(std::deque<int> &deq){

    size_t leftDeq = 0;
    size_t rightDeq = 1;
    while (leftDeq < deq.size() && rightDeq < deq.size()){
        _countDeq++;
        int nb = (deq[leftDeq] > deq[rightDeq] ? deq[leftDeq] : deq[rightDeq]);
        if (deq[leftDeq]  > deq[rightDeq]){
            _indexBig.push_back(leftDeq);
            _small.push_back(deq[rightDeq]);
            _indexSmall.push_back(leftDeq);
        }
        else{
            _indexBig.push_back(rightDeq);
            _small.push_back(deq[leftDeq]);
            _indexSmall.push_back(rightDeq);
        }
        _big.push_back(nb);
            leftDeq += 2;
            rightDeq += 2;
    }
}

void PmergeMe::jacobsthalOrderDeq(std::deque<int> &small, std::deque<int> & bigger){
    
    if (small.empty() || bigger.empty())
        return;
        
    //create & store Jacobstahl Order in Index
    std::deque<size_t> index;
    size_t siz = 0;
    size_t prev = 0;
    size_t prevprev = 0;
    index.push_back(0);
    index.push_back(1);
    for (size_t i = 2; i <= small.size(); i++){
        prev = index[i - 1];
        prevprev = index[i - 2];
        siz = prev + (2 * prevprev);
        index.push_back(siz);
    }
   
    bool    hasHold = false;    
    int     hold = 0;
    size_t  indxHold = 0;
    size_t  smallsiz = small.size();
    if (small.size() > bigger.size()){
        hold = *(small.end() - 1);
        indxHold = *(_indexSmall.end() - 1);
        small.pop_back();
        _indexSmall.pop_back();
        hasHold = true;
    }
    
    std::deque<size_t> rankToPend(small.size());
    for (size_t j = 0; j < _indexSmall.size(); j++){
        for (size_t r = 0; r < _indexBig.size(); r++){
            if (_indexSmall[j] == _indexBig[r]){
                rankToPend[r] = j;
                break;
            }
        }
    }
    if (hasHold == true){
        small.insert(small.end(), hold);
        _indexSmall.insert(_indexSmall.end(), indxHold);
        rankToPend.insert(rankToPend.end(), smallsiz - 1);
    }

    // place it at index found in vector<>index then decremente
    // jn = jn - 1 + 2.jn - 2
    size_t count = 1;
    bigger.insert(bigger.begin(), small[rankToPend[0]]);
    _indexBig.insert(_indexBig.begin(), _indexSmall[rankToPend[0]]);
    for (size_t i = 2; i <= small.size(); i++){
        size_t stop = index[i - 1];
        size_t pos = index[i];
        if (pos >= small.size()){
            pos = small.size();
        }
        for(size_t j = pos;j > stop; j--){
            size_t idx = rankToPend[j - 1];
            binarySearchDeq(bigger, _indexBig, small[idx], _indexSmall[idx], _indexSmall[idx]);
            count++;
            if (count == small.size()){
                return;
            }
        }
    }
}

void    PmergeMe::fordJohnsonDeq(std::deque<int> & deq){
    
    bool hasHold = false;
    size_t len = deq.size();
    if (len < 3){
        if (deq[0] > deq[1]){
            int temp = deq[1];
            deq[1] = deq[0];
            deq[0] = temp;
        }
        if (deq[0] == deq[1])
            return;
        return;
    }
    int hold = 0;
    if (len % 2 != 0){
        hold = *(deq.end() - 1);
        deq.pop_back();
        hasHold = true;
    }

    sortPairsDeq(deq);

    if (hasHold == true){
        _small.push_back(hold);
        _indexSmall.push_back(len - 1);
    }
    if (len == 3){
        _big.insert(_big.begin(), _small[0]);
        binarySearchDeq(_big, _indexBig,_small[1], _indexSmall[1], _indexSmall[1]);
        deq = _big;
        return;
    }
    
    sortBiggerDeq(_big, _indexBig);

    jacobsthalOrderDeq(_small, _big);

    deq = _big;
}

void    PmergeMe::binarySearchDeq(std::deque<int> &deq, std::deque<size_t> &idx, int target, size_t index, size_t winnerId){
    
    ssize_t marker = -1;
    for (size_t i = 0; i < idx.size(); i++){
        if (idx[i] == winnerId){
            marker = i;
            break;
        }
    }
    
    ssize_t i = 0;
    ssize_t j;
    if (marker == -1)
        j = deq.size() - 1;
    else if (marker == 0){
        deq.insert(deq.begin(), target);
        idx.insert(idx.begin(), index);
        return;
    }
    else
        j = marker - 1;
    
    while(i <= j){
        ssize_t mid = i + (j - i) / 2;
        _countDeq++;
        if (deq[mid] <= target)
            i = mid + 1;
        else if (deq[mid] > target)
            j = mid - 1;
    }
    if (static_cast<size_t>(i) == deq.size()){
        deq.insert(deq.end(), target);
        idx.insert(idx.end(), index);
        return;
    }
    deq.insert(deq.begin() + i, target);
    idx.insert(idx.begin() + i, index);
    
    
}

void    PmergeMe::checkDeq(std::deque<int> & deq){
    size_t i = 0;
    for (size_t j = i + 1; j < deq.size() && i < deq.size() ; i++, j++){
        if (deq[i] > deq[j]){
            std::cout << "Sort Deque : Sort Failed." << std::endl;
            return;
        }
    }
    std::cout << "Sort Deque : Sort Success." << std::endl;
    
}

void    PmergeMe::printDeque(std::deque<int> &deq, size_t n){

    for (size_t i = 0; i < n;++i){
        std::cout << deq[i] << " "; 
    }
    std::cout << std::endl;
}