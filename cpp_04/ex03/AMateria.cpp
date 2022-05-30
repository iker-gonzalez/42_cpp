/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:53:33 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/30 13:00:30 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(std::string const &type){
	this->_type = type;
}

AMateria::AMateria(AMateria const &obj) {
	*this = obj;
}

AMateria::~AMateria(void) {}

AMateria &AMateria::operator=(AMateria const &obj) {
	this->_type = obj._type;
	return (*this);
}