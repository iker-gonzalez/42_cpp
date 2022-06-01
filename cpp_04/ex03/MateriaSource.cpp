/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:21:07 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/01 13:51:43 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
		_learnedMateria[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &obj) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = obj;
    for (int i = 0; i < 4; i++)
		_learnedMateria[i] = NULL;
}

MateriaSource::~MateriaSource(void) {
	std::cout << "MateriaSource default destructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &obj) {
	std::cout << "MateriaSource asignment operator overload called" << std::endl;
    *(this->_learnedMateria) = *(obj._learnedMateria);
    return *this;
}

void    MateriaSource::learnMateria(AMateria *m) {

    int idx = 0;
	
	while (idx < 4)
	{
		if (!_learnedMateria[idx]) {
			_learnedMateria[idx] = m;
			std::cout << *(m) << " materia LEARNED at index " << idx << std::endl;
			return ;
		}
		idx++;
	}
	std::cout << "---------Inventory is full. Can't learn another materia.-----------" << std::endl;
}

AMateria*    MateriaSource::createMateria(std::string const &type) {
    
    int idx = 0;
	
    if ((type) == "") {
	    std::cout << "---------Materia can't be CREATED because it does not exist-----------" << std::endl;
        return NULL;
    }
	while (idx < 4)
	{
        
		if (_learnedMateria[idx]->getType() == type) {
			std::cout << *(_learnedMateria[idx]) << " materia has been CREATED" << std::endl;
			return(_learnedMateria[idx]->clone());
		}
		idx++;
        
	}
    return NULL;
}
