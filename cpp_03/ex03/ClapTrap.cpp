/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:10:34 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/24 10:50:22 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//constructors

ClapTrap::ClapTrap(void): _name("unknown") {

    std::cout << "ClapTrap default constructor called:" << std::endl;
    std::cout << "Name: " << _name << std::endl;
    this->_hitpoints = 10;
    std::cout << "Hit points: " << _hitpoints << std::endl; 
    this->_energyPoints = 10;
    std::cout << "Energy points: " << _energyPoints << std::endl; 
    this->_attackDamage = 0;
    std::cout << "Attach damage: " << _attackDamage << std::endl;
    std::cout << "===============" << std::endl;}

ClapTrap::ClapTrap(std::string new_name): _name(new_name) {

    std::cout << "ClapTrap parameter constructor called:" << std::endl;
    std::cout << "Name: " << _name << std::endl;
    this->_hitpoints = 10;
    std::cout << "Hit points: " << _hitpoints << std::endl; 
    this->_energyPoints = 10;
    std::cout << "Energy points: " << _energyPoints << std::endl; 
    this->_attackDamage = 0;
    std::cout << "Attach damage: " << _attackDamage << std::endl;
    std::cout << "===============" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
    std::cout << "Claptrap copy constructor called" << std::endl;
	*this = obj;
}

//destructor

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap " << _name << " has been destroyed" << std::endl;
}

//assignation operator overload

ClapTrap &ClapTrap::operator=(ClapTrap const &obj) {

    std::cout << "ClapTrap assignation operator overload called" << std::endl;
    this->_name = obj._name;
    this->_hitpoints = obj._hitpoints;
    this->_energyPoints = obj._energyPoints;
    this->_attackDamage = obj._attackDamage;

    return(*this);
}

//methods

void    ClapTrap::attack(std::string const &target) {

    if ((int)_energyPoints >= 6 && _hitpoints)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target;
        std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
        this->_energyPoints -= 6;
        std::cout << _name << " has " << getEnergyPoints() << " energy points (-6)" << std::endl;
    }
    else if ((int)_energyPoints < 6 && _hitpoints)
        std::cout << "ClapTrap " << _name << " can't attack because he hasn't have enough energy points" << std::endl;
    else if (!_hitpoints)
        std::cout << "ClapTrap " << _name << " can't attack because he is dead" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {

    if ((int)(this->_hitpoints - (int)amount) < 0)
    {
        this->_hitpoints = 0;
        std::cout << _name << " has died" << std::endl;
    }
    else
    {
        std::cout << _name << " takes " << amount << " points of damage!" << std::endl;
        this->_hitpoints -= amount;
        std::cout << _name << " has " << getHitPoints() << " hit points" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {

    if(this->_hitpoints > 0)
    {
        std::cout << _name << " has been repaired and gained " << amount << " hit points!" << std::endl;
        this->_hitpoints += amount;
        std::cout << _name << " has " << getHitPoints() << " hit points" << std::endl;
    }
    else
        std::cout << _name << " can't be repaired because it is dead " << std::endl;
}

//getters

int     ClapTrap::getHitPoints(void) {return(this->_hitpoints);}

int     ClapTrap::getEnergyPoints(void) {return(this->_energyPoints);}

int     ClapTrap::getAtackDamage(void) {return(this->_attackDamage);}
