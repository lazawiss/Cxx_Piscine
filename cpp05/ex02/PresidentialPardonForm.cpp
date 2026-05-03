/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 15:06:20 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/19 20:45:47 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"


PresidentialPardonForm::PresidentialPardonForm( std::string target ): AForm("PresidentialPardonForm", 25, 5), _target(target), _signed(0){

    std::cout << "Constructor PresidentialPardonForm called " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) : AForm(src){
    
    std::cout << "Copy Constructor PresidentialPardonForm called " << std::endl;
    *this = src; 
}

PresidentialPardonForm::~PresidentialPardonForm( void ){
    
    std::cout << "Destructor PresidentialPardonForm called " << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & other ){

    if (this != &other){
        AForm::operator=(other);
        this->_signed = other._signed;
        this->_target = other._target;
    }
    std::cout << "Assignment Operator PresidentialPardonForm called " << std::endl;
    
    return *this;
}

std::string PresidentialPardonForm::getTarget( void ) const{

    return this->_target;
}

void    PresidentialPardonForm::PresidentialPardon( void ) const{

    std::cout << getTarget() << " has been pardonned by the President Zaphod Beeblebrox." << std::endl;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    
    if ( getSigned() == 0 )
        throw AForm::NotSignedException();
    if ( executor.getGrade() <= getGradeToExecute() )
        PresidentialPardon();
    else
        throw AForm::GradeTooLowException();
}
