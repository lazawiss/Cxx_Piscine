# include "RPN.hpp"

RPN::RPN(std::list<char> &input) : _input(input){

}

RPN::RPN( RPN const & src ) : _input(src._input), _carried(src._carried){

}

RPN::~RPN(){

}

RPN & RPN::operator=( RPN const & other ){
    
    if (this != &other){

        this->_input    = other._input;
        this->_carried  = other._carried;
    }
    
    return *this;
}

bool    RPN::isSign( char & hold ){

    return hold == '+' ||
            hold == '-' ||
            hold == '*' ||
            hold == '/';
}

int    RPN::parseInput(){

    char    hold = _input.front();
    int     leftNum = 0;
    int     result = 0;
    bool    sign = false;
    bool    carry = false;


    if (isSign(hold) == true){
        throw std::runtime_error("Error: input invalid");
    }
    if (sign == false && !isdigit(hold))
        throw std::runtime_error("Error: input invalid");
    else{
        
        std::stringstream ss;
        ss << hold;
        ss >> leftNum;
        if (leftNum >= 10)
            throw std::runtime_error("Error: argument value is too high.");
        _input.pop_front();
        if (_input.size() == 0)
            throw std::runtime_error("Error: not enough value.");
    }
         
    for (size_t i = _input.size(); i > 0 ;i--){
        
        int rightNum = 0;
       
        hold = _input.front();
        if (carry == false && isSign(hold) == true){
            throw std::runtime_error("Error: input invalid");
        }
        if (sign == false && !isdigit(hold)){
            throw std::runtime_error("Error: input invalid");
        }
        else{
            
            std::stringstream ss;
            ss << hold;
            ss >> rightNum;
            if (rightNum >= 10)
                throw std::runtime_error("Error: argument value is too high.");
            _input.pop_front();
            if (_input.size() == 0)
                throw std::runtime_error("Error: not enough value or sign.");
        }

        hold = _input.front();

        if (isSign(hold) == false && isdigit(hold)){
        _carried.push_front(leftNum);
        leftNum = rightNum;
        carry = true;
            continue;
        }
        else
            result = makeOperations(leftNum, rightNum);

        while (carry == true)
        {        
            _input.pop_front();
            leftNum = _carried.front();
            _carried.pop_front();
            rightNum = result;
            result = makeOperations(leftNum, rightNum);
            if (_carried.empty())
                carry = false;
        } 
        leftNum = result;

        if (_input.size() == 1)
            return result;
        _input.pop_front();
    }

    return result;
}

int    RPN::makeOperations( int & leftNum, int & rightNum){

    if (_input.size() == 0)
            throw std::runtime_error("Error: not enough value or sign.");
    char op = _input.front();
  
    int result = 0;
    if (isSign(op) == false){
        throw std::runtime_error("Error: input invalid");
    }

    switch(op){

        case('+'):{
            result = leftNum + rightNum;
            break;
        }
        case('-'):{
            result = leftNum - rightNum;
            break;
        }
        case('*'):{
            result = leftNum * rightNum;
            break;
        }
        case('/'):{
            if (rightNum == 0){
                throw std::runtime_error("Error: dividing by 0 is impossible.");
            }
            result = leftNum / rightNum;
            break;
        }
    }
    return result;
}
