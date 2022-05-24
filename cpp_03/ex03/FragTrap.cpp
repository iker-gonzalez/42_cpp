/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:52:22 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/24 10:51:50 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//constructors

FragTrap::FragTrap(void): ClapTrap() {

    std::cout << "FragTrap default constructor called:" << std::endl;
    this->_name = "unknown";
    std::cout << "Name: " << _name << std::endl;
    this->_hitpoints = 100;
    std::cout << "Hit points: " << _hitpoints << std::endl; 
    this->_energyPoints = 100;
    std::cout << "Energy points: " << _energyPoints << std::endl; 
    this->_attackDamage = 30;
    std::cout << "Attach damage: " << _attackDamage << std::endl;
    std::cout << "===============" << std::endl;
}

FragTrap::FragTrap(std::string new_name): ClapTrap(new_name) {

    std::cout << "FragTrap parameter constructor called:" << std::endl;
    std::cout << "Name: " << _name << std::endl;
    this->_hitpoints = 100;
    std::cout << "Hit points: " << _hitpoints << std::endl; 
    this->_energyPoints = 100;
    std::cout << "Energy points: " << _energyPoints << std::endl; 
    this->_attackDamage = 30;
    std::cout << "Attach damage: " << _attackDamage << std::endl;
    std::cout << "===============" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
	*this = obj;
}

//destructor

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap " << _name << " has been destroyed" << std::endl;
}

//assignation operator overload

FragTrap &FragTrap::operator=(FragTrap const &obj) {

    std::cout << "FragTrap assignation operator overload called" << std::endl;
    this->_name = obj._name;
    this->_hitpoints = obj._hitpoints;
    this->_energyPoints = obj._energyPoints;
    this->_attackDamage = obj._attackDamage;

    return(*this);
}

void FragTrap::attack(std::string const &target) {

    if ((int)_energyPoints >= 6 && _hitpoints)
    {
        std::cout << "FragTrap " << _name << " attacks " << target;
        std::cout << ", causing " << _attackDamage << " points of damage!" << std::endl;
        this->_energyPoints -= 6;
        std::cout << "FragTrap " << _name << " has " << getEnergyPoints() << " energy points (-6)" << std::endl;
    }
    else if ((int)_energyPoints < 6 && _hitpoints)
        std::cout << "FragTrap " << _name << " can't attack because he hasn't have enough energy points" << std::endl;
    else if (!_hitpoints)
        std::cout << "FragTrap " << _name << " can't attack because he is dead" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrapp " <<_name << " says: hey, you earthling, give me five!" << std::endl;
}