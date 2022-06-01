/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:34:33 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/01 12:18:30 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string new_name) : _name(new_name) {
	std::cout << "Character parameter constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const &obj) {
	std::cout << "Character copy constructor called" << std::endl;
	*this = obj;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::~Character(void) {
	std::cout << "Character default destructor called" << std::endl;
}

Character &Character::operator=(Character const &obj) {
	std::cout << "Character asignment operator overload called" << std::endl;
	this->_name = obj._name;
	*(this->_inventory) = *(obj._inventory);
	return *this;
}

std::string const &Character::getName() const {
	return(this->_name);
}

void Character::equip(AMateria *m) {

	int idx = 0;
	
	while (idx < 4)
	{
		if (!_inventory[idx]) {
			_inventory[idx] = m;
			std::cout << *(m) << " materia ADDED at index " << idx << std::endl;
			return ;
		}
		idx++;
	}
	std::cout << "Inventory is full. Can't ADD another materia." << std::endl;
}

void Character::unequip(int idx) {
	
	if (_inventory[idx]) {
		std::cout << *(_inventory[idx]) << " materia UNEQUIPPED at index " << idx << std::endl;
		_inventory[idx] = NULL;
	}
	else
		std::cout << "Can't UNEQUIP non-existent materia." << std::endl;
}

void Character::use(int idx, ICharacter &target) {
	if (this->_inventory[idx]) {
		std::cout << *(_inventory[idx]) << " materia USED at index " << idx << std::endl;
		this->_inventory[idx]->use(target);
	}
	else
		std::cout << "can't use a non-existent materia" << std::endl;
}