/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:34:33 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/31 11:35:34 by ikgonzal         ###   ########.fr       */
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
}

Character &Character::operator=(Character const &obj) {
	std::cout << "Character asignment operator overload called" << std::endl;
	this->_name = obj._name;
	*(this->_inventory) = *(obj._inventory);
	return *this;
}

std::string const &Character::getName() const {
	std::cout << "Character getter called" << std::endl;
	return(this->_name);
}

void Character::equip(AMateria *m) {

	int idx = 0;
	
	while (idx < 4)
	{
		if (!_inventory[idx]) {
			_inventory[idx] = m;
			std::cout << *(m) << " materia added at index " << idx << std::endl;
			return ;
		}
		idx++;
	}
	std::cout << "Inventory is full. Can't add another materia." << std::endl;
}

void Character::unequip(int idx) {
	
	if (_inventory[idx])
		_inventory[idx] = NULL;
	else
		std::cout << "Can't unequip non-existent materia." << std::endl;
}

void Character::use(int idx, ICharacter &target) {
	this->_inventory[idx]->use(target);
}