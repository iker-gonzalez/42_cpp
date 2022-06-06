/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:01:16 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/06 12:13:26 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("unknown"),  {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(Form const &obj) {
    std::cout << "Form copy constructor called" << std::endl;
    *this = obj;
}

Form::~Form(void) {
	std::cout << "Form default destructor called" << std::endl;
}

Form &Form::operator=(Form const &obj) {
    std::cout << "Form assignation operator overload called" << std::endl;
    *(std::string*)&_name = obj.getName();
	_signed = obj.getSigned();
    return (*this);
}

//getters

std::string const &Form::getName(void) const{
	return(this->_name);
}

bool const &Form::getSigned(void) const{
	return(this->_signed);
}

int const &Form::getGradeToSign(void) const {
	return(this->_gradeToSign);
}

int const &Form::getGradeToExecute(void) const {
	return(this->_gradeToExecute);
}