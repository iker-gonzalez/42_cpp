/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:08:35 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/02 11:09:46 by ikgonzal         ###   ########.fr       */
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

void	Bureaucrat::incrementGrade(int increment) {
	this->_grade += increment;
}

void	Bureaucrat::decrementGrade(int decrement) {
	this->_grade -= decrement;
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