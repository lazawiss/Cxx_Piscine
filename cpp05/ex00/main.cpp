/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 20:09:43 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/23 17:56:07 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {

    try {
        std::cout << "TEST 1\n";
        
        Bureaucrat First("Manu", 1);
        std::cout << First << std::endl;
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

        Bureaucrat First("Manu", 1);
        std::cout << First << std::endl;

        First.incrementGrade();
        std::cout << First << std::endl;
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

        Bureaucrat Second("Bruno", 0);
        std::cout << Second << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException & f){
        
        std::cerr << f.what() << std::endl;
    }
    std::cout << '\n';
  
    std::cout << "TEST 4\n";
    
    Bureaucrat Third("Gerald", 150);
    std::cout << Third << std::endl;
    Bureaucrat* ThirdBis = new Bureaucrat(Third);
    try {
        
        std::cout << *(ThirdBis) << std::endl;
        ThirdBis->decrementGrade();
        std::cout << ThirdBis << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException & f){
        
        std::cerr << f.what() << std::endl;
    }
    delete ThirdBis;
    std::cout << '\n';

    try {
        std::cout << "TEST 5\n";

        Bureaucrat Fourth("Rachida", -45);
        std::cout << Fourth << std::endl;
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