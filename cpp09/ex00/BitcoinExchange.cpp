/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 19:30:57 by lzannis           #+#    #+#             */
/*   Updated: 2026/10/02 21:31:46 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( std::string & str) : _buf(str),_year(0), _month(0), _day(0){
    
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src): _buf(src._buf),_year(src._year), 
_month(src._month), _day(src._day), _dataCsv(src._dataCsv){

}

BitcoinExchange::~BitcoinExchange(){

}

BitcoinExchange &   BitcoinExchange::operator=( BitcoinExchange const & other ){
    
    if (this != &other){
        this->_buf = other._buf;
        this->_year = other._year;
        this->_month = other._month;
        this->_day = other._day;
        this->_dataCsv = other._dataCsv;
    }
    
    return *this;
}

bool    BitcoinExchange::is_digit(std::string & str){

    int count = 0;
    for (size_t i = 0; i < str.size(); i++){
        if (str[i] == '-' || str[i] == '.'){
            count++;   
            continue;
        }
        if (!isdigit(str[i]) || count > 1)
            return false;
    }
    return true;
}

void    BitcoinExchange::parseCsv(){
    
    const char *cvsfile = "data.csv";
     struct stat sb;

    if (stat(cvsfile, &sb) == -1 || !S_ISREG(sb.st_mode)){
        throw std::runtime_error("Error: stat() file doesn't exist or wrong file descriptor" );
    }
    
    std::ifstream ifs;
    ifs.open(cvsfile,std::ios::out);
    if (!ifs.is_open()){
        throw std::runtime_error("Error: file doesn't exist or wrong file descriptor" );
    }
    if (ifs.peek() == EOF)
        throw std::runtime_error("Error: .csv file is empty.");
        
    std::string line;

    if (getline(ifs, line)){
        if (line != "date,exchange_rate")
            throw std::runtime_error("Error: no header.");
    }
    
    while(getline(ifs, line)){
        
        if (line.empty())
            continue;
        
        std::string inputDate;

        size_t lenline = line.size();
        size_t pos = line.find(',');
        if (pos == std::string::npos){
            _dataCsv[line];
            checkDateCvs(inputDate);
            continue;
        }
        std::string beforeComma = line.substr(0, pos - 0);
        inputDate = beforeComma;
        if (checkDateCvs(inputDate) == false){
            throw std::runtime_error("Error: wrong format in database => " + inputDate );
        }
        std::string afterComma = line.substr(pos, lenline - pos);
        afterComma.erase(afterComma.begin());
        if (afterComma.empty())
            throw std::runtime_error("Error: no value in database => " + line);
        if (is_digit(afterComma) == false)
            throw std::runtime_error("Error: wrong format in database => " + afterComma);
        std::stringstream ss;
        ss << afterComma;
        float value;
        ss >> value;
        
        // NaN detection = only nbr not equal to itself
        if (value < 0 || value > std::numeric_limits<float>::max() || value != value)
            throw std::runtime_error("Error: invalid value in database => " + afterComma);

        if (_dataCsv.size() > 0){
            
            std::map<std::string, float>::iterator it;
            for (it = _dataCsv.begin(); it != _dataCsv.end(); it++){
            
                if (it->first == beforeComma)
                    throw std::runtime_error("Error: date already in database => " + beforeComma);
                
            }
        }
        
        _dataCsv[beforeComma] = value;
    }

    if (_dataCsv.empty())
        throw std::runtime_error("Error: map is empty");

    ifs.close();
         
}

// parse & check date 
bool   BitcoinExchange::checkDateCvs(std::string &inputDate){
    
    if (inputDate.size() > 10 || inputDate.size() < 10)
        return false;
    std::istringstream input2;
    input2.str(inputDate);
    std::string line;
    int count = 0;
    std::string sYear,sMonth,sDay;
    while( getline(input2,line,'-')){
        if (count == 0)
            sYear = line;
        else if (count == 1)
            sMonth = line;
        else
            sDay = line;
        count++;
    }
    if (is_digit(sYear) == false || is_digit(sMonth) == false || is_digit(sDay) == false ){
        std::cerr << "Error: year-month-day is not a digit => "<< inputDate << std::endl;
        return false;   
    }
    std::stringstream ss;
    ss << sYear;
    int year;
    ss >> year;
    ss.clear();
    ss << sMonth;
    int month;
    ss >> month;
    ss.clear();
    ss << sDay;
    int day;
    ss >> day;
    
    if (!(year >= 2009 && year <= 2022)){
        std::cerr << "Error: year is not in database => "<< inputDate << std::endl;
        return false;
    }
    if (!(month >= 1 && month <= 12)){
        std::cerr << "Error: month is not valid => " << inputDate << std::endl;
        return false;
    }
    if (!(day >= 1 && day <= 31)){
        std::cerr <<"Error: day is not valid => " << inputDate << std::endl;
        return false;
    }
    if (month == 2 && day > 29){
        std::cerr << "Error: February doesn't have that many days !! => " << inputDate << std::endl;
        return false;
    }
    
    return true;
}

// parse & check date
// store dates in private variables
bool   BitcoinExchange::checkDate(std::string &inputDate){
    
    if (inputDate.size() > 10 || inputDate.size() < 10){
        std::cerr << "Error: wrong input date => "<< inputDate << std::endl;
        return false;
    }
    std::istringstream input2;
    input2.str(inputDate);
    std::string line;
    int count = 0;
    std::string sYear,sMonth,sDay;
    while( getline(input2,line,'-')){
        if (count == 0)
            sYear = line;
        else if (count == 1)
            sMonth = line;
        else
            sDay = line;
        count++;
    }
    if (is_digit(sYear) == false || is_digit(sMonth) == false || is_digit(sDay) == false ){
        std::cerr << "Error: year-month-day is not a digit => "<< inputDate << std::endl;
        return false;   
    }
    std::stringstream ss;
    ss << sYear;
    ss >> _year;
    ss.clear();
    ss << sMonth;
    ss >> _month;
    ss.clear();
    ss << sDay;
    ss >> _day;
    
    if (!(_year >= 2009 && _year <= 2022)){
        std::cerr << "Error: year is not in database => "<< inputDate << std::endl;
        return false;
    }
    if (!(_month >= 1 && _month <= 12)){
        std::cerr << "Error: month is not valid => " << inputDate << std::endl;
        return false;
    }
    if (!(_day >= 1 && _day <= 31)){
        std::cerr <<"Error: day is not valid => " << inputDate << std::endl;
        return false;
    }
    if (_month == 2 && _day > 29){
        std::cerr << "Error: February doesn't have that many days !! => " << inputDate << std::endl;
        return false;
    }
    
    return true;
}


// parse input
void   BitcoinExchange::parseInput(){
    
    parseCsv();
   
    std::ifstream ifs;
    
    struct stat sb;

    if (stat(_buf.c_str(), &sb) == -1 || !S_ISREG(sb.st_mode)){
        throw std::runtime_error("Error: stat() file doesn't exist or wrong file descriptor" );
    }
    ifs.open(_buf.c_str());
    if (!ifs.is_open()){
        throw std::runtime_error("Error: file doesn't exist or wrong file descriptor.");
    }
    if (ifs.peek() == EOF)
        throw std::runtime_error("Error: input file is empty.");

    std::string line;
    if (getline(ifs, line)){
        if (line != "date | value")
            throw std::runtime_error("Error: no header.");
    }
    
    while(getline(ifs, line)){
        
        if (line.empty()){
            std::cerr << "Error: line is empty." << std::endl;
            continue;
        }
            
        std::string inputDate;
        size_t lenline = line.size();
        size_t pos = line.find(" | ");
        if (pos == std::string::npos){
            inputDate = line;
            checkDate(inputDate);
            continue;
        }
        std::string beforePipe = line.substr(0, pos - 0);
        inputDate = beforePipe;
        if (checkDate(inputDate) == false)
            continue;
        std::string afterPipe = line.substr(pos, lenline - pos);
        afterPipe.erase(afterPipe.begin(), afterPipe.begin() + 3);
        if (afterPipe.empty()){
            std::cerr << "Error: no value." << afterPipe << std::endl;
            continue;
        }
        
        if (is_digit(afterPipe) == false){
            std::cerr << "Error: value is not a digit => " << afterPipe << std::endl;
            continue;
        }
        float value = 0.0;
        if (afterPipe.find('.') != std::string::npos){
            value = atof(afterPipe.c_str());
        }
        else
            value = atol(afterPipe.c_str());

        if (checkValue(value) == false)
            continue;
   
        float rate = 0.00;
        rate = findRate(inputDate);

        std::cout << inputDate << " => " << afterPipe << " = " << std::fixed << std::setprecision(2)<< value * rate << std::endl;
    }
    
    ifs.close();

    
}

bool BitcoinExchange::isMonth31(){
   return _month == 1 ||
        _month == 3 ||
        _month == 5 ||
        _month == 7 ||
        _month == 8 ||
        _month == 10 ||
        _month == 12; 
}

bool BitcoinExchange::isMonth30(){
     return _month == 4 ||
        _month == 6 ||
        _month == 9 ||
        _month == 11;
}

//leapyear divible /4 + /100 + /400
bool BitcoinExchange::isFebruary29(){

    if ((_year % 4 == 0 && _year % 100 != 0) || (_year % 400 == 0))
        return true;
    return false;
}

std::string    BitcoinExchange::intToStringDate(){
    
    std::string date;
    std::string str_year, str_month, str_day;
    std::stringstream ss;
    
    ss << _month;
    str_month = ss.str();
    if (_month < 10)
        str_month = '0' + str_month;

    ss.clear();
    ss.str("");

    ss << _year;
    str_year = ss.str();

    ss.clear();
    ss.str("");

    ss << _day;
    str_day = ss.str();
    if (_day < 10)
        str_day = '0' + str_day;

    date = str_year + '-' + str_month + '-' + str_day;
    
    return date;
}

// match dat from input to datefrom csv
float    BitcoinExchange::findRate(std::string & date){
    
    float rate = 0.0;
    std::map<std::string, float> map = _dataCsv;
    std::map<std::string, float>::iterator it;
    for (it = map.begin(); it != map.end();it++){
        if (it->first == date){
            rate = it->second;
            return rate;
        }
    }
    
    for (it = map.begin(); it != map.end();it++){
        
        for (it = map.begin(); it != map.end();it++){
            
            if (it->first == date){
                rate = it->second;
                return rate;
            }
        }
        
        if ( (isMonth31() == true && _day < 31) || 
        (isMonth30()== true && _day < 30)){
            _day++;
            date = intToStringDate();
        }
        else if ((_month == 2 && isFebruary29() == true && _day < 29) 
        || (_month == 2 && isFebruary29() == false && _day < 28)){
            _day++;
            date = intToStringDate();
        }
        else if ( (_month != 12 && isMonth31() == true && _day == 31) || 
        (isMonth30()== true && _day == 30)){
            _month++;
            _day = 1;
            date = intToStringDate();
        }
        else if ((_month == 2 && isFebruary29() == true && _day == 29) 
        || (_month == 2 && isFebruary29() == false && _day == 28)){
            _month++;
            _day = 1;
            date = intToStringDate();
        }
        else if (_month == 12 && isMonth31() == true && _day == 31){
            _year++;
            _month = 1;
            _day = 1;
            date = intToStringDate();
        }
      
    }
    return rate;
}
