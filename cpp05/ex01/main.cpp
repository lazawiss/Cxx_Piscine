/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzannis <lzannis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 20:09:43 by lzannis           #+#    #+#             */
/*   Updated: 2026/03/20 16:53:06 by lzannis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ) {

    try {
        std::cout << "TEST 1\n";
        
        Form Fourth("Circular A-42", 42, 42);
        std::cout << Fourth << std::endl;
        Bureaucrat First("Manu", 1);
        std::cout << First << std::endl;
        First.signForm(Fourth);
    }
    catch (Form::GradeTooLowException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (Form::GradeTooHighException & f){
        
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

        Form Fourth("Circular E312", 150, 0);
        std::cout << Fourth << std::endl;
        Bureaucrat Second("Bruno", 0);
        std::cout << Second << std::endl;
    }
    catch (Form::GradeTooLowException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (Form::GradeTooHighException & f){
        
        std::cerr << f.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException & f){
        
        std::cerr << f.what() << std::endl;
    }
    std::cout << '\n';
  
    Bureaucrat Third("Gerald", 150);
    Bureaucrat* ThirdBis = new Bureaucrat(Third);
    try {
        
        std::cout << "TEST 3\n";
        
        Form Fourth("Circular E312", 150, 120);
        std::cout << Fourth << std::endl;
        std::cout << Third << std::endl;
        Third.signForm(Fourth);
        std::cout << *(ThirdBis) << std::endl;
        ThirdBis->decrementGrade();
        std::cout << ThirdBis << std::endl;
    }
    catch (Form::GradeTooLowException & e){
        
        std::cerr << e.what() << std::endl;
    }
    catch (Form::GradeTooHighException & f){
        
        std::cerr << f.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e ){
        
        std::cerr << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException & f){
        
        std::cerr << f.what() << std::endl;
    }
    delete ThirdBis;
    std::cout << '\n';

    try {
        std::cout << "TEST 4\n";

        Form Amend("Amendment 49.3", 45, 40);
        std::cout << Amend << std::endl;

        Bureaucrat Fourth("Rachida", 46);
        std::cout << Fourth << std::endl;
        Fourth.signForm(Amend);
        Fourth.incrementGrade();
        Fourth.signForm(Amend);
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