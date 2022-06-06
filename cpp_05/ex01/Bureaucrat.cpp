/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:08:35 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/06 19:27:00 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

static const int	gradeMax = 1;
static const int	gradeMin = 150;

Bureaucrat::Bureaucrat(void): _name("unknown"), _grade(0) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string newName, int newGrade): _name(newName), _grade(newGrade) {

	std::cout << "Bureaucrat parameter constructor called" << std::endl;
	try {
		if (_grade < 1)
			throw GradeTooHighException();
		else if (_grade > 150)
			throw GradeTooLowException();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) {
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = obj;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat default destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj) {
    std::cout << "Bureaucrat assignation operator overload called" << std::endl;
    *(std::string*)&_name = obj.getName();
	_grade = obj.getGrade();
    return (*this);
}

void	Bureaucrat::incrementGrade() {

	try {
		if ((this->_grade - 1) < gradeMax)
			throw GradeTooHighException();
		this->_grade -= 1;
	}
	catch (std::exception & e) {
    	std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade() {

	try {
		if ((this->_grade + 1) > gradeMin)
			throw GradeTooLowException();
		this->_grade += 1;
	}
	catch (std::exception & e) {
    	std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(Form const &target) const{
	
	try {
		if (target.getStatus() == true)
			    std::cout << "[✅]"<< _name << " signs " << target.getName() << std::endl; 
	}
	catch (std::exception & e) {
		std::cout << "[❌]" <<_name << " cannot sign " << target.getName() << " because: " << e.what() <<std::endl; 
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