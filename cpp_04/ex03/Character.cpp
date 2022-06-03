/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:34:33 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/03 12:24:58 by ikgonzal         ###   ########.fr       */
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
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = obj._inventory[i];
	return *this;
}

std::string const &Character::getName() const {
	return(this->_name);
}

void Character::equip(AMateria *m) {

	int idx = 0;
	
	if (!m) {
		std::cout << "---------" << _name << " can't EQUIP a non-existent materia.-----------" << std::endl << std::endl;
		return ;
	}
	while (idx < 4)
	{
		if (!_inventory[idx]) {
			_inventory[idx] = m;
			std::cout << _name << " has been EQUIPPED with " << *(m) << " materia stored at index " << idx << std::endl;
			return ;
		}
		idx++;
	}
	std::cout << std::endl << "---------" << _name << " can't EQUIP another materia. Inventory is full.-----------" << std::endl << std::endl;
	delete m;
}

void Character::unequip(int idx) {
	
	if (idx >=0 && idx <= 3 && _inventory[idx]) {
		std::cout << _name << " UNEQUIPPED " << *(_inventory[idx]) << " materia at index " << idx << std::endl;
		_inventory[idx] = NULL;
	}
	else
		std::cout << std::endl <<"---------" << _name << " can't UNEQUIP non-existent materia.-----------" << std::endl << std::endl;
}

void Character::use(int idx, ICharacter &target) {
	if (this->_inventory[idx]) {
		std::cout << _name << " has USED " << *(_inventory[idx]) << " materia at index " << idx << std::endl;
		this->_inventory[idx]->use(target);
		this->unequip(idx);
	}
	else
		std::cout << std::endl<< "---------" << _name << " can't USE a non-existent materia.------------" << std::endl << std::endl;
}