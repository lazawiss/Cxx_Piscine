/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 15:00:57 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/20 18:12:44 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

#include  "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm {

private:
    
    std::string         _target;
    bool                _signed;
    static int          _robotomy;

    
public:

                            RobotomyRequestForm( std::string target );
                            RobotomyRequestForm( RobotomyRequestForm const & src );
                            ~RobotomyRequestForm( void );
    RobotomyRequestForm &   operator=(RobotomyRequestForm const & other );

    std::string             getTarget( void ) const;
    int                     getRobotomy( void ) const;


    void                    RobotomyRequest() const;
    
    void                    execute(Bureaucrat const & executor) const;
      
};
