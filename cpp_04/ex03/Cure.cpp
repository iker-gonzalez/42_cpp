/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:29:10 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/03 11:50:31 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string const &type): AMateria("cure") {
	std::cout << "Cure parameter constructor called" << std::endl;
	this->_type = type;
}

Cure::Cure(Cure const &obj): AMateria("cure") {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = obj;
}

Cure::~Cure(void) {
	std::cout << "Cure default destructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &obj) {
	std::cout << "Cure assignment operator overload called" << std::endl;
	this->_type = obj._type;
	return *this;
}

AMateria *Cure::clone() const {
	return(new Cure(*this));
}

void    Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
