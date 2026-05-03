/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 15:05:08 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/20 18:12:48 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm {
    
private:

    std::string         _target;
    bool                _signed;

public:

                                PresidentialPardonForm( std::string target );
                                PresidentialPardonForm( PresidentialPardonForm const & src );
                                ~PresidentialPardonForm( void );
    
    PresidentialPardonForm &    operator=( PresidentialPardonForm const & other );

    std::string                 getTarget( void ) const;

    void                        PresidentialPardon( void ) const;

    void                        execute(Bureaucrat const & executor) const;
    
};
