/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 19:02:00 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/19 20:31:21 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat {

private:

    const std::string   _name;
    int                 _grade;

public:
    
                    Bureaucrat( std::string name, int grade );
                    Bureaucrat( Bureaucrat const & src );
                    ~Bureaucrat( void );
    
    Bureaucrat &    operator=( Bureaucrat const & other);
    
    std::string     getName( void ) const;
    int             getGrade( void ) const;
    
    int             incrementGrade( void );
    int             decrementGrade( void );

    void            signForm( AForm & F );
    void            executeForm( AForm const & form ) const;

    class GradeTooHighException : public std::exception {
      
    public:
        
        virtual const char* what() const throw();
    };


    class GradeTooLowException : public std::exception {
      
    public:
        
        virtual const char* what() const throw();
    };

};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & i);