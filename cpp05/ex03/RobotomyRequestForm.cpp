/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 15:02:52 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/19 20:45:56 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"


RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("RobotomyRequestForm", 72, 45), _target(target), _signed(0){
    
    std::cout << "Constructor RobotomyRequestForm called " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) : AForm(src) {
    
    std::cout << "Copy Constructor RobotomyRequesForm called " << std::endl;
    *this = src; 
}

RobotomyRequestForm::~RobotomyRequestForm( void ){
    
    std::cout << "Destructor RobotomyRequestForm called " << std::endl;
}

RobotomyRequestForm &   RobotomyRequestForm::operator=(RobotomyRequestForm const & other ){
    
    if (this != &other){
        AForm::operator=(other);
        this->_signed = other._signed;
        this->_target = other._target;
    }
    std::cout << "Assignment Operator RobotomyRequestForm called " << std::endl;
    
    return *this;
}

std::string RobotomyRequestForm::getTarget( void ) const{
    
    return this->_target;
}

int RobotomyRequestForm::getRobotomy( void ) const{
    
    return this->_robotomy;
}

void    RobotomyRequestForm::RobotomyRequest() const{
    
    if (getRobotomy() == 1){
        std::cout <<  "...Robotomy has failed... " << std::endl;
        _robotomy = 0;
        return;
    }
    std::cout <<  "GWIIIIIIIIIZZZZZZZ...GWEEERRRRZZZZZZZ...Robotomy completed... " << std::endl;
    _robotomy = 1;
}
    
void    RobotomyRequestForm::execute( Bureaucrat const & executor ) const{
    
    if ( getSigned() == 0 )
        throw AForm::NotSignedException();
    if ( executor.getGrade() <= getGradeToExecute() )
        RobotomyRequest();
    else
        throw AForm::GradeTooLowException();
}

int RobotomyRequestForm::_robotomy = 0;