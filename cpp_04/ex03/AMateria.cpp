/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:53:33 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/31 09:09:54 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type){
	std::cout << "AMateria parameter constructor called" << std::endl;
	this->_type = type;
}

AMateria::AMateria(AMateria const &obj) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = obj;
}

AMateria::~AMateria(void) {
	std::cout << "AMateria default destructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &obj) {
	std::cout << "AMateria asignment operator overload called" << std::endl;
	this->_type = obj._type;
	return (*this);
}

std::string	const &AMateria::getType (void) const {
	std::cout << "AMateria getter called" << std::endl;
	return(this->_type);
}

std::ostream &operator<<(std::ostream &out, AMateria const &obj)
{
	out << "AMateria: " << obj.getType() << std::endl;
	return (out);
}