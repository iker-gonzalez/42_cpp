/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:24:56 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/31 12:33:21 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//constructors

ScavTrap::ScavTrap(void): ClapTrap() {

    std::cout << "ScavTrap default constructor called:" << std::endl;
    this->_name = "unknown";
    std::cout << "Name: " << _name << std::endl;
    this->_hitpoints = 100;
    std::cout << "Hit points: " << _hitpoints << std::endl; 
    this->_energyPoints = 50;
    std::cout << "Energy points: " << _energyPoints << std::endl; 
    this->_attackDamage = 20;
    std::cout << "Attach damage: " << _attackDamage << std::endl;
    std::cout << "===============" << std::endl;
}

ScavTrap::ScavTrap(std::string new_name): ClapTrap(new_name) {

    std::cout << "ScavTrap parameter constructor called:" << std::endl;
    std::cout << "Name: " << _name << std::endl;
    this->_hitpoints = 100;
    std::cout << "Hit points: " << _hitpoints << std::endl; 
    this->_energyPoints = 50;
    std::cout << "Energy points: " << _energyPoints << std::endl; 
    this->_attackDamage = 20;
    std::cout << "Attach damage: " << _attackDamage << std::endl;
    std::cout << "===============" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = obj;
}

//destructor

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap " << _name << " has been destroyed" << std::endl;
}

//assignation operator overload

ScavTrap &ScavTrap::operator=(ScavTrap const &obj) {

    std::cout << "ScavTrap assignation operator overload called" << std::endl;
    this->_name = obj._name;
    this->_hitpoints = obj._hitpoints;
    this->_energyPoints = obj._energyPoints;
    this->_attackDamage = obj._attackDamage;

    return(*this);
}

void ScavTrap::attack(std::string const &target) {

    if ((int)_energyPoints >= 6 && _hitpoints)
    {
        std::cout << _name << " attacks " << target;
        std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
        this->_energyPoints -= 6;
        std::cout << _name << " has " << getEnergyPoints() << " energy points (-6)" << std::endl;
    }
    else if ((int)_energyPoints < 6 && _hitpoints)
        std::cout << _name << " can't attack because he hasn't have enough energy points" << std::endl;
    else if (!_hitpoints)
        std::cout << _name << " can't attack because he is dead" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << _name << " has enterred in Gate keeper mode." << std::endl;
}