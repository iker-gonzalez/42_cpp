/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 08:56:45 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/13 09:03:57 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(std::string weapon) {
	this->_type = weapon;
}

Weapon::~Weapon(void) {}

std::string&	Weapon::getType(void) {

	return(_type);
}

void	Weapon::setType(std::string new_type) {

	if(new_type == "")
		std::cout << "new_type can't be an empty string";
	this->_type = new_type;
}
