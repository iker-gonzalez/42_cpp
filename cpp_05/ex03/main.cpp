/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:25:56 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/09 10:39:11 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {

	Bureaucrat p1("Braulio", 100);
	
	//try shrubbery action
	ShrubberyCreationForm sh1 ("home");
	std::cout << sh1 << std::endl;
	sh1.execute(p1);
	std::cout << p1 << std::endl;

	//try robotomy action
	RobotomyRequestForm rb1 ("insurance");
	std::cout << rb1 << std::endl;
	rb1.execute(p1);
	std::cout << p1 << std::endl;

	//try presidential action
	try {
		PresidentialPardonForm pr1 ("telephone");
		std::cout << pr1 << std::endl;
		p1.signForm(pr1);
		std::cout << pr1 << std::endl;
		p1.executeForm(pr1);
		p1.executeForm(rb1);
		p1.executeForm(sh1);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	Intern braulio;
	Form* rrf;
	rrf = braulio.makeForm("shrubbery creation", "insurtech");
	
}