/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:29:10 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/01 12:16:51 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string const &type): AMateria("ice") {
	std::cout << "Ice parameter constructor called" << std::endl;
	this->_type = type;
}

Ice::Ice(Ice const &obj): AMateria("ice") {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = obj;
}

Ice::~Ice(void) {
	std::cout << "Ice default destructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &obj) {
	std::cout << "Ice assignment operator overload called" << std::endl;
	this->_type = obj._type;
	return *this;
}

AMateria *Ice::clone() const {
	return(new Ice(*this));
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}



