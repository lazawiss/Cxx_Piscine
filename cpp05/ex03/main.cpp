/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 20:09:43 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/23 17:54:01 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main( void ) {

    Intern someRandomIntern;
    AForm* rrf;
    
    std::cout << "TEST 1\n";
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf)
        std::cout << *(rrf) <<std::endl;
    if (rrf)
        delete rrf;
    std::cout << "\n";
    
    std::cout << "TEST 2\n";
    rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    if (rrf)
        std::cout << *(rrf) <<std::endl;
    if (rrf)
        delete rrf;
    std::cout << "\n";

    std::cout << "TEST 3\n";
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    if (rrf)
        std::cout << *(rrf) <<std::endl;
    if (rrf)
        delete rrf;
    std::cout << "\n";

    std::cout << "TEST 4\n";
    rrf = someRandomIntern.makeForm("robotomy reque", "Bender");
      if (rrf)
        std::cout << *(rrf) <<std::endl;
    if (rrf)
        delete rrf;
    std::cout << "\n";

    std::cout << "TEST 5\n";
    rrf = someRandomIntern.makeForm("robotomy requestt", "Bender");
      if (rrf)
        std::cout << *(rrf) <<std::endl;
    if (rrf)
        delete rrf;
    std::cout << "\n";
    
    std::cout << "TEST 6\n";
    rrf = someRandomIntern.makeForm("", "Bender");
      if (rrf)
        std::cout << *(rrf) <<std::endl;
    if (rrf)
        delete rrf;
    std::cout << "\n";

    std::cout << "TEST 7\n";
    rrf = someRandomIntern.makeForm("aoubgoaubgou", "Bender");
    if (rrf)
        std::cout << *(rrf) <<std::endl;
    if (rrf)
        delete rrf;
    std::cout << "\n";
    
    std::cout << "TEST 8\n";
    rrf = someRandomIntern.makeForm("robotomy                                                               request", "Bender");
      if (rrf)
        std::cout << *(rrf) <<std::endl;
    if (rrf)
        delete rrf;
    std::cout << "\n";
    
    std::cout << "TEST 9\n";
    rrf = someRandomIntern.makeForm("robotomy pardon", "Bender");
    if (rrf)
        std::cout << *(rrf) <<std::endl;
    if (rrf)
        delete rrf;
    std::cout << std::endl;


    delete rrf;
    return 0;
}