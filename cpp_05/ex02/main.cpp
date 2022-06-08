/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:25:56 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/08 14:17:14 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

	Bureaucrat p1("Braulio", 20);
	
	//try shrubbery action
	ShrubberyCreationForm sh1 ("home");
	std::cout << sh1 << std::endl;
	sh1.execute(p1);
	std::cout << p1 << std::endl;

	//try robotomy action
	RobotomyRequestForm rb1 ("home");
	std::cout << rb1 << std::endl;
	rb1.execute(p1);
	std::cout << p1 << std::endl;
}