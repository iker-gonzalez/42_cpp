/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:08:35 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/06 11:13:03 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string newName, int newGrade): _name(newName), _grade(newGrade) {
	std::cout << "Bureaucrat parameter constructor called" << std::endl;
}


Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat default destructor called" << std::endl;
}

void	Bureaucrat::incrementGrade() {

	try {
		if ((this->_grade - 1) < this->_gradeMax)
			throw GradeTooHighException();
		this->_grade -= 1;
	}
	catch (std::exception & e) {
    	std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade() {

	try {
		if ((this->_grade + 1) > this->_gradeMin)
			throw GradeTooLowException();
		this->_grade += 1;
	}
	catch (std::exception & e) {
    	std::cout << e.what() << std::endl;
	}
}

std::string const &Bureaucrat::getName(void) const{
	return(this->_name);
}

int const &Bureaucrat::getGrade(void) const{
	return(this->_grade);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw(){
    return ("[❌]Invalid grade, higher than the maximum (1)");
}
const char *Bureaucrat::GradeTooLowException::what(void) const throw(){
    return ("[❌]Invalid grade, lower than the minimum (150)");
}