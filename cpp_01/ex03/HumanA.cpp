/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:37:42 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/12 11:29:05 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon){

	this->_name = name;
}

HumanA::~HumanA(void) {}

void	HumanA::attack(void) {
	
	std::cout << _name << " attacks with his weapon " << _weapon.getType() << std::endl;
}