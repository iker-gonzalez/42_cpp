/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:40:22 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/07 12:41:52 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("unknown", 145, 137) {
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): Form(target, 145, 137) {
	std::cout << "ShrubberyCreationForm parameter constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj): Form(obj) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "ShrubberyCreationForm default destructor called" << std::endl;
}
/*
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj) {
	std::cout << "ShrubberyCreationForm assignation operator overload called" << std::endl;
	return (*this);
}*/

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	
	std::ofstream	ofs;
	std::string		name;

	name = executor.getName();
	ofs.open(name.append("_shrubbery"), std::ios::out);
	ofs << "           _-_" << std::endl;
    ofs << "        /~~   ~~\\" << std::endl;
    ofs << "      /~~        ~~\\" << std::endl;
    ofs << "     {              } "<< std::endl;
    ofs << "     \\  _-     -_  /"<< std::endl;
    ofs << "        ~  \\ /  ~"<< std::endl;
    ofs << "    _- -   | | _- _"<< std::endl;
    ofs << "      _ -  | |   -_"<< std::endl;
    ofs <<  "           / \\" << std::endl;
	ofs.close();
}