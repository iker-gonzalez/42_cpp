/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:37:13 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/12 12:36:12 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) {}

HumanB::HumanB(std::string name) {
	this->_name = name;
}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon weapon) {
	this->_weapon = &weapon;
}

void	HumanB::attack(void) {
	
	std::cout << _name << " attacks with his weapon " << _weapon->getType() << std::endl;
}