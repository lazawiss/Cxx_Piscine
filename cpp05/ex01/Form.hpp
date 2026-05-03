/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:59:30 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/20 16:00:16 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;


class Form {

private:
    
    const std::string   _name;
    bool                _signed;
    const int           _gradeToSign;
    const int           _gradeToExecute;
    
public:

                Form(std::string name, int gradetosign, int gradetoexecute);
                Form( Form const & src );
                ~Form( void );
    Form &      operator=( Form const & other );

    std::string getName( void ) const;
    int         getGradeToSign( void ) const;
    int         getGradeToExecute( void ) const;
    int         getSigned( void ) const;
    
    void        beSigned( Bureaucrat & B );
    
    class GradeTooHighException : public std::exception {
      
    public:
        
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
      
    public:
        
        virtual const char* what() const throw();
    };
    
};

std::ostream & operator<<( std::ostream & o, Form const & i );