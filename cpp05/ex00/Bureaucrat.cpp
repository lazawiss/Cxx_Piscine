/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 19:56:27 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/23 17:57:01 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade){
    
    if (this->_grade >= 151)
        throw Bureaucrat::GradeTooLowException();
    else if (this->_grade <= 0)
        throw Bureaucrat::GradeTooHighException();
        
    std::cout << "Constructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ): _name(src._name){
    
    std::cout << "Copy Constructor Bureaucrat called" << std::endl;
    
    *this = src;
}
 
Bureaucrat::~Bureaucrat( void ){
    
    std::cout << "Destructor Bureaucrat called" << std::endl;
}

    
Bureaucrat &    Bureaucrat::operator=( Bureaucrat const & other){
    
    if (this != &other){
        this->_grade = other.getGrade();
    }
    std::cout << "Assignement Operator Bureaucrat called" << std::endl;
    
    return *this; 
}

std::string Bureaucrat::getName( void ) const{
    
    return this->_name;
}

int Bureaucrat::getGrade( void ) const{
    
    return this->_grade;
}

int Bureaucrat::incrementGrade( void ){
    
    this->_grade--;
    if (this->_grade <= 0)
        throw Bureaucrat::GradeTooHighException();

    return this->_grade;
}

int Bureaucrat::decrementGrade( void ) {
    
    this->_grade++;
    if (this->_grade >= 151)
        throw Bureaucrat::GradeTooLowException();

    return this->_grade;
}
    
const char* Bureaucrat::GradeTooHighException::what() const throw(){
    
    return( "Bureaucrat's grade is too high" );
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    
    return( "Bureaucrat's grade is too low" );
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & i){
    
    o << i.getName() + ", bureaucrat grade " << i.getGrade() << ".";
    
    return o;
}
