/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:41:14 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/20 18:12:41 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>


#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm {

private:
    
    std::string         _target;
    bool                _signed;

    
public:

                            ShrubberyCreationForm( std::string target );
                            ShrubberyCreationForm( ShrubberyCreationForm const & src );
                            ~ShrubberyCreationForm( void );
    
    ShrubberyCreationForm & operator=( ShrubberyCreationForm const & other );

    std::string             getTarget( void ) const;
    
    void                    createFiles() const;
    
    void                    execute( Bureaucrat const & executor ) const;
    
    class GradeToSignException : public std::exception {
      
    public:
        
        virtual const char* what() const throw();
    };

    class GradeToExecuteException : public std::exception {
      
    public:
        
        virtual const char* what() const throw();
    };
    
};
