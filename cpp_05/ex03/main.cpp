/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:25:56 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/10 13:33:26 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Form *p1 = NULL;

    try{
        std::cout << "[1️⃣ ]TEST 1. SHRUBBERY FORM " << std::endl;
        p1 = new ShrubberyCreationForm("Shrubbery");
        Bureaucrat b1("Pepe", 45);
        std::cout << b1 << std::endl;
        std::cout << *p1 << std::endl;
        b1.executeForm(*p1);
        b1.signForm(*p1);
        b1.executeForm(*p1);
        std::cout << b1 << std::endl;
        std::cout << *p1 << std::endl;
        delete p1;
    }
    catch (std::exception &e)
    {
        delete p1;
        std::cout << e.what() << std::endl;
    }

    try{
        std::cout << std::endl << "[2️⃣ ]TEST 2. ROBOTOMY REQUEST FORM " << std::endl;
        p1 = new RobotomyRequestForm("Robotomy");
        Bureaucrat b1("Julio", 45);
        std::cout << b1 << std::endl;
        std::cout << *p1 << std::endl;
        b1.executeForm(*p1);
        b1.signForm(*p1);
        b1.executeForm(*p1);
        b1.incrementGrade();
        b1.executeForm(*p1);
        std::cout << b1 << std::endl;
        std::cout << *p1 << std::endl;
        delete p1;
    }
    catch (std::exception &e)
    {
        delete p1;
        std::cout << e.what() << std::endl;
    }

    try
    {
       std::cout << std::endl << "[3️⃣  ]TEST 3. PRESIDENTIAL CREATION FORM " << std::endl;    
       p1 = new PresidentialPardonForm("Pardon");
       Bureaucrat b1("Jessica", 1);
       std::cout << b1 << std::endl;
       std::cout << *p1 << std::endl;
       b1.executeForm(*p1);
       b1.signForm(*p1);
       b1.executeForm(*p1);
       std::cout << b1 << std::endl;
       std::cout << *p1 << std::endl; 
       delete p1;
    }
    catch (std::exception &e){
        delete p1;
        std::cout <<  e.what() << std::endl;
    };
	
	std::cout << std::endl;
	Bureaucrat b1("Julio", 1);
	Intern braulio;
	Form* rrf;
	rrf = braulio.makeForm("shrubbery creation", "insurtech");
	
	delete rrf;
	rrf = braulio.makeForm("robotomy request", "home");
	b1.signForm(*rrf);
	b1.executeForm(*rrf);
	delete rrf;
	rrf = braulio.makeForm("presidential pardon", "pepe");
	b1.signForm(*rrf);
	b1.executeForm(*rrf);
	delete rrf;
	rrf = braulio.makeForm("jsolinis slytherin", "papa");
    return (0);
}