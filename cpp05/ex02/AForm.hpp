/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:59:30 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/19 20:45:15 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;


class AForm {

private:
    
    const std::string   _name;
    bool                _signed;
    const int           _gradeToSign;
    const int           _gradeToExecute;
    
public:

                    AForm( std::string name, int gradetosign, int gradetoexecute );
                    AForm( AForm const & src );
    virtual         ~AForm( void );
    AForm &         operator=( AForm const & other );
    
    std::string     getName( void ) const;
    int             getGradeToSign( void ) const;
    int             getGradeToExecute( void ) const;
    int             getSigned( void ) const;
    
    void            beSigned( Bureaucrat & B );

    virtual void    execute(Bureaucrat const & executor) const = 0;
    
    class GradeTooHighException : public std::exception {
      
    public:
        
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
      
    public:
        
        virtual const char* what() const throw();
    };
    
    class NotSignedException : public std::exception {
      
    public:
        
        virtual const char* what() const throw();
    };
    
};

std::ostream & operator<<( std::ostream & o, AForm const & i );