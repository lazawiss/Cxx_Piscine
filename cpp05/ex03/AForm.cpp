/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 19:26:45 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/20 17:00:28 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm( std::string name, int gradetosign, int gradetoexecute ) : _name(name), _signed(0), _gradeToSign(gradetosign), _gradeToExecute(gradetoexecute){
    
    if ( this->_gradeToSign >= 151 || this->_gradeToExecute >= 151 )
        throw AForm::GradeTooLowException();
    if (this->_gradeToSign <= 0 || this->_gradeToExecute <= 0 )
        throw AForm::GradeTooHighException();
        
    std::cout << "Constructor AForm called " << std::endl;
}

AForm::AForm( AForm const & src ): _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
    
    std::cout << "Copy Constructor AForm called " << std::endl;
    *this = src;
}

AForm::~AForm( void ){
    
    std::cout << "Destructor AForm called " << std::endl;
}

AForm &  AForm::operator=( AForm const & other ){

    if (this != &other){
        this->_signed = other._signed;
    }
    std::cout << "Assignment Operator AForm called " << std::endl;
    
    return *this;
}

std::string AForm::getName( void ) const{
    
    return this->_name;
}

int AForm::getGradeToSign( void ) const{
    
    return this->_gradeToSign;
}

int AForm::getGradeToExecute( void ) const{
    
    return this->_gradeToExecute;
}

int AForm::getSigned( void ) const{
    
    return this->_signed;
}

void    AForm::beSigned( Bureaucrat & B ){
    
    if (B.getGrade() <= getGradeToSign())
        this->_signed = 1;
    else
        throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw(){
    
    return ("Grade is too high to sign or execute form.");
}

const char* AForm::GradeTooLowException::what() const throw(){
    
    return ("Grade is too low to sign or execute form.");
}

const char* AForm::NotSignedException::what() const throw(){
    
    return (" This form needs to be signed.");
}

std::ostream & operator<<( std::ostream & o, AForm const & i ) {
    
    o << i.getName() << ", needs a grade " << i.getGradeToSign() << " to get signed, ";
    o << "and a grade " << i.getGradeToExecute() << " to get executed.";
    return o;
}
