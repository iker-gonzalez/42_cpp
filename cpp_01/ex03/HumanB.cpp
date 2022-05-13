/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:37:13 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/13 09:02:54 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) {}

HumanB::HumanB(std::string name): _weapon(nullptr) {
	this->_name = name;
}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon& weapon) {
	
	if (weapon.getType() == "")
		std::cout << "the new weapon can't be empty";
	this->_weapon = &weapon;
}

void	HumanB::attack(void) {
	
	if (this->_weapon)
		std::cout << _name << " attacks with his weapon " << _weapon->getType() << std::endl;
	else
		std::cout << this->_name << " can't attack without a weapon" << std::endl;
}

