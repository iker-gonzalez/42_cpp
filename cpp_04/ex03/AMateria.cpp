/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:53:33 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/01 12:18:09 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type){
	std::cout << "AMateria parameter constructor called" << std::endl;
	this->_type = type;
}

std::string	const &AMateria::getType (void) const {
	return(this->_type);
}

std::ostream &operator<<(std::ostream &out, AMateria const &obj)
{
	out << obj.getType();
	return (out);
}

void	AMateria::use(ICharacter &target) {
	std::cout << "An unknown materia has been USED by " << target.getName() << std::endl;
}