/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:34:04 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/30 12:37:09 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//constructors

DiamondTrap::DiamondTrap(void) {

    std::cout << "DiamondTrap default constructor called:" << std::endl;
    ClapTrap::_name = "unknown_clap_name";
    this->_hitpoints = FragTrap::_hitpoints;
    std::cout << "Hit points: " << _hitpoints << std::endl; 
    this->_energyPoints = ScavTrap::_energyPoints;
    std::cout << "Energy points: " << _energyPoints << std::endl;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "Attach damage: " << _attackDamage << std::endl;
    std::cout << "===============" << std::endl;
}

DiamondTrap::DiamondTrap(std::string new_name) {

    
    std::cout << "DiamondTrap parameter constructor called:" << std::endl;
    _name = new_name;
    ClapTrap::_name = new_name + "_clap_name";
    this->_hitpoints = FragTrap::_hitpoints;
    std::cout << "Hit points: " << _hitpoints << std::endl; 
    this->_energyPoints = ScavTrap::_energyPoints;
    std::cout << "Energy points: " << _energyPoints << std::endl;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "Attach damage: " << _attackDamage << std::endl;
    std::cout << "===============" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = obj;
}

//destructor

DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap " << _name << " has been destroyed" << std::endl;
}

//assignation operator overload

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj) {

    std::cout << "DiamondTrap assignation operator overload called" << std::endl;
    this->_name = obj._name;
    this->_hitpoints = obj._hitpoints;
    this->_energyPoints = obj._energyPoints;
    this->_attackDamage = obj._attackDamage;

    return(*this);
}