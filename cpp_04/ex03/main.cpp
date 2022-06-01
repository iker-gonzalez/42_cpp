/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:53:10 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/01 14:02:43 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main(void) {

	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	//src->learnMateria(new Ice());
	//src->learnMateria(new Cure());
	//learn more than four materias
	src->learnMateria(new Ice());
	
	ICharacter* me = new Character("PACO");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	//create a materia not previously learnt
	//tmp = src->createMateria("fire");
	//equip a non-existent materia
	//me->equip(tmp);
	//unequip a non-existent materia
	//me->unequip(5);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("ROB");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	return 0;
}