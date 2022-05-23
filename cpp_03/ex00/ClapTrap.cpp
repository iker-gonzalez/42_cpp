/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:10:34 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/23 11:09:38 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
    std::cout << "ClapTrap " << _name << " has been created (default)" << std::endl;
}

ClapTrap::ClapTrap(std::string new_name) {

    this->_name= new_name;
    this->_hitpoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "ClapTrap " << _name << " has been created" << std::endl;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap " << _name << " has been destroyed" << std::endl;
}

void    ClapTrap::attack(std::string const &target) {

    std::cout << "ClapTrap " << _name << " attacks " << target;
    std::cout << ", causing " << _hitpoints << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {

    if ((int)(this->_energyPoints - (int)amount) < 0)
    {
        this->_energyPoints = 0;
        std::cout << "ClapTrap " << _name << " has " << getEnergyPoints() << " energy points ";
        std::cout <<  "and needs to be repaired!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
        this->_energyPoints -= amount;
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {

    std::cout << "ClapTrap " << _name << " has been repaired and gained " << amount << " energy points!" << std::endl;
    this->_energyPoints += amount;
}

int     ClapTrap::getHitPoints(void) {
    return(this->_hitpoints);
}

int     ClapTrap::getEnergyPoints(void) {
    return(this->_energyPoints);
}
