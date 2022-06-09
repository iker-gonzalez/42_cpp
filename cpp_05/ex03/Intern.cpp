/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 09:10:35 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/09 10:38:19 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern const &obj){
	std::cout << "Intern copy constructor called" << std::endl;
	*this = obj;
}

Intern::~Intern(void) {
	std::cout << "Intern default destructor called" << std::endl;
}

Intern &Intern::operator=(Intern const &obj) {
	std::cout << "Intern assignation operator overload called" << std::endl;
	(void)obj;
	return (*this);
}

Form *Intern::clonePresidential(std::string &target) {
	return(new PresidentialPardonForm(target));
}

Form *Intern::cloneRobotomy(std::string &target) {
	return(new RobotomyRequestForm(target));
}

Form *Intern::cloneShrubbery(std::string &target) {
	return(new ShrubberyCreationForm(target));
}

Form*	Intern::makeForm(std::string formName, std::string target) {
	
	Form *(Intern::*p[3])(std::string&) = {&Intern::cloneShrubbery, &Intern::cloneRobotomy, &Intern::clonePresidential};
	std::string forms[] = {"shrubbery creation","robotomy request","presidential pardon"};

	int i = 0;
	while (i <= 2)
	{
		if (!forms[i].compare(formName)) {
            std::cout << "[ 🧑🏼 ] Intern creates " << forms[i] << " form" << std::endl;
			return ((this->*(p[i]))(target));
		}
		i++;
	}
	std::cout << "[ ❌ ]Can't create an unknown form" << std::endl;
	return (NULL);
}