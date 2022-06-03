/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:53:33 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/03 12:36:46 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void){
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type){
	std::cout << "AMateria parameter constructor called" << std::endl;
	this->_type = type;
}

AMateria::~AMateria(void){
	std::cout << "AMateria default destructor called" << std::endl;
}


AMateria &AMateria::operator=(AMateria const &obj) {
	std::cout << "AMateria asignment operator overload called" << std::endl;
    this->_type = obj._type;
    return *this;
}

std::ostream &operator<<(std::ostream &out, AMateria const &obj)
{
	out << obj.getType();
	return (out);
}

std::string	const &AMateria::getType (void) const {
	return(this->_type);
}

void	AMateria::use(ICharacter &target) {
	std::cout << "An unknown materia has been USED by " << target.getName() << std::endl;
}