/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 19:26:45 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/23 13:14:09 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( std::string name, int gradetosign, int gradetoexecute ) : _name(name), _signed(0), _gradeToSign(gradetosign), _gradeToExecute(gradetoexecute){
    
    if ( this->_gradeToSign >= 151 || this->_gradeToExecute >= 151 )
        throw Form::GradeTooLowException();
    if (this->_gradeToSign <= 0 || this->_gradeToExecute <= 0 )
        throw Form::GradeTooHighException();
        
    std::cout << "Constructor Form called " << std::endl;
}

Form::Form( Form const & src ): _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
    
    std::cout << "Copy Constructor Form called " << std::endl;
    *this = src;
}

Form::~Form( void ){
    
    std::cout << "Destructor Form called " << std::endl;

}

Form &  Form:: operator=( Form const & other ){

    if (this != &other){
        this->_signed = other._signed;
    }
    std::cout << "Assignment Operator Form called " << std::endl;
    

    return *this;
}

std::string Form::getName( void ) const{
    
    return this->_name;
}

int Form::getGradeToSign( void ) const{
    
    return this->_gradeToSign;
}

int Form::getGradeToExecute( void ) const{
    
    return this->_gradeToExecute;
}

int Form::getSigned( void ) const{
    
    return this->_signed;
}

void    Form::beSigned( Bureaucrat & B ){
    
    if (B.getGrade() <= getGradeToSign())
        this->_signed = 1;
    else
        throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw(){
    
    return ("Grade is too high to sign or execute form.");
}

const char* Form::GradeTooLowException::what() const throw(){
    
    return ("Grade is too low to sign or execute form.");
}

std::ostream & operator<<( std::ostream & o, Form const & i ) {
    
    o << i.getName() << ", needs a grade " << i.getGradeToSign() << " to get signed, ";
    o << "and a grade " << i.getGradeToExecute() << " to get executed.";
    return o;
}
