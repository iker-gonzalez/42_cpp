/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:01:16 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/06 19:26:24 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("unknown"), _status(false), _gradeToSign(0), _gradeToExecute(0) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string const new_name, int gradeToSign, int gradeToExecute):
	_name(new_name), _status(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	std::cout << "Form parameter constructor called" << std::endl;
	try {
		if (_gradeToSign < 1 || _gradeToExecute < 1)
			throw GradeTooHighException();
		else if (_gradeToExecute > 150 || _gradeToSign > 150)
			throw GradeTooLowException();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

Form::Form(Form const &obj): _name(obj.getName()), _gradeToSign(getGradeToSign()), _gradeToExecute(getGradeToExecute()) {
    std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(void) {
	std::cout << "Form default destructor called" << std::endl;
}

Form &Form::operator=(Form const &obj) {
    std::cout << "Form assignation operator overload called" << std::endl;
    *(std::string*)&_name = obj.getName();
	_status = obj.getStatus();
    return (*this);
}

void	Form::beSigned(Bureaucrat const &obj) {
	try {
		if (obj.getGrade() > this->getGradeToSign()) {
			obj.signForm(*this);
			throw GradeTooLowException();
		}
		this->setStatus();
		obj.signForm(*this);

	}
	catch (std::exception & e) {
    	std::cout << e.what() << std::endl;
	}
}

//getters

std::string const &Form::getName(void) const{
	return(this->_name);
}

bool const &Form::getStatus(void) const{
	return(this->_status);
}

int const &Form::getGradeToSign(void) const {
	return(this->_gradeToSign);
}

int const &Form::getGradeToExecute(void) const {
	return(this->_gradeToExecute);
}

//setter

void	Form::setStatus(void) {
	this->_status = true;
}

//exceptions

const char *Form::GradeTooHighException::what(void) const throw(){
    return ("[❌]Grade too high");
}
const char *Form::GradeTooLowException::what(void) const throw(){
    return ("[❌]Grade too low");
}

std::ostream &operator<<(std::ostream &out, Form const &obj)
{
	std::cout << std::endl;
	out << "*** FORM STATE ***" << std::endl;
	out << "Name:" << obj.getName() << std::endl;
	out << "Status:" << obj.getStatus() << std::endl;
	out << "Grade to sign:" << obj.getGradeToExecute() << std::endl;
	out << "Grade to execute:" << obj.getGradeToSign() << std::endl;
	return (out);
}