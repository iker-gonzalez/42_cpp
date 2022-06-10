/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:01:16 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/10 13:19:44 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("unknown"), _status(false), _gradeToSign(0), _gradeToExecute(0) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string const new_name, int gradeToSign, int gradeToExecute):
	_name(new_name), _status(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	std::cout << "Form parameter constructor called" << std::endl;
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw GradeTooHighException();
	else if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw GradeTooLowException();
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
		if (obj.getGrade() > this->getGradeToSign())
			throw GradeTooLowException();
		this->setStatus();
}

//getters

std::string const &Form::getName(void) const {
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

void	Form::execute(Bureaucrat const & executor) const {
	if (!this->getStatus())
		throw FormNotSigned();
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();
	action(executor);
}


//exceptions

const char *Form::GradeTooHighException::what(void) const throw(){
	return ("[❌]Grade too high");
}

const char *Form::GradeTooLowException::what(void) const throw(){
	return ("[❌]Grade too low");
}

const char *Form::FormNotSigned::what(void) const throw(){
	return ("[❌]Form has not been signed");
}

std::ostream &operator<<(std::ostream &out, Form const &obj)
{
	std::cout << std::endl;
	out << "[📄] " << obj.getName() << " form:" << std::endl;
	out << "Status:" << obj.getStatus() << std::endl;
	out << "Grade to sign:" << obj.getGradeToSign() << std::endl;
	out << "Grade to execute:" << obj.getGradeToExecute() << std::endl;
	return (out);
}