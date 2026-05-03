/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 20:09:43 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/20 16:58:28 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main( void ) {

    try {
        std::cout << "TEST 1\n";
        
        ShrubberyCreationForm ShrubberyCreationForm("Patio");
        std::cout << ShrubberyCreationForm << std::endl;
        Bureaucrat First("Manu", 1);
        std::cout << First << std::endl;
        First.signForm( ShrubberyCreationForm );
        First.executeForm( ShrubberyCreationForm );
    }
    catch (AForm::NotSignedException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (AForm::GradeTooLowException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (AForm::GradeTooHighException & f){
        
        std::cerr << f.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException & f){
        
        std::cerr << f.what() << std::endl;
    }
    std::cout << '\n';

    try {
        std::cout << "TEST 2\n";

        RobotomyRequestForm Robotomy("Manu");
        std::cout << Robotomy << std::endl;
        Bureaucrat Second("Bruno", 0);
        std::cout << Second << std::endl;
    }
    catch (AForm::NotSignedException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (AForm::GradeTooLowException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (AForm::GradeTooHighException & f){
        
        std::cerr << f.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException & f){
        
        std::cerr << f.what() << std::endl;
    }
    std::cout << '\n';
  
    try {
        std::cout << "TEST 3\n";
        
        RobotomyRequestForm Robotomy("Manu");
        std::cout << Robotomy << std::endl;
        Bureaucrat Third("Gerald", 150);
        std::cout << Third << std::endl;
        Third.signForm(Robotomy );
        Bureaucrat ThirdBis(Third);
        std::cout << ThirdBis << std::endl;
        Bureaucrat Second("Bruno", 72);
        std::cout << Second << std::endl;
        Second.signForm(Robotomy);
        Second.executeForm(Robotomy);
        Bureaucrat Fourth("Melania", 42);
        std::cout << Fourth << std::endl;
        Fourth.executeForm(Robotomy);
        Fourth.executeForm(Robotomy);
        Fourth.executeForm(Robotomy);
        Fourth.executeForm(Robotomy);
        
    }
    catch (AForm::NotSignedException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (AForm::GradeTooLowException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (AForm::GradeTooHighException & f){
        
        std::cerr << f.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException & f){
        
        std::cerr << f.what() << std::endl;
    }
    std::cout << '\n';

    try {
        std::cout << "TEST 4\n";

        PresidentialPardonForm Pardon("Arthur");
        std::cout << Pardon << std::endl;

        Bureaucrat Fourth("Rachida", 16);
        std::cout << Fourth << std::endl;
        Fourth.executeForm(Pardon);
        Fourth.signForm(Pardon);
        Fourth.incrementGrade();
        Fourth.executeForm(Pardon);
        Bureaucrat First("Manu", 1);
        std::cout << First << std::endl;
        First.executeForm( Pardon );
    }
    catch (AForm::NotSignedException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (AForm::GradeTooLowException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (AForm::GradeTooHighException & f){
        
        std::cerr << f.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException & f){
        
        std::cerr << f.what() << std::endl;
    }
    std::cout << '\n';

    return 0;
}