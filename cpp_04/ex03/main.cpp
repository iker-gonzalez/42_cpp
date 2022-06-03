/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:53:10 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/03 12:59:21 by ikgonzal         ###   ########.fr       */
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
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	//learn more than four materias
	src->learnMateria(new Ice());
	
	ICharacter* me = new Character("PACO");
	
	AMateria* tmp;
	//create a materia not previously learnt
	tmp = src->createMateria("fire");
	//equip a non-existent materia
	me->equip(tmp);
	//unequip a non-existent materia
	me->unequip(5);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("ROB");
	
	me->use(0, *bob);
	me->use(1, *bob);
	//use unequipped materia
	me->use(1, *bob);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);

	
	std::cout << std::endl << "---------[5️⃣ ]DEEP COPY----------" << std::endl;
	
	Character a;
	Character b;
	
	tmp = src->createMateria("ice");
	a.equip(tmp);
	b = a;
	a.use(0, *bob);
	b.use(0, *bob);
	
	delete tmp; 
	delete bob;
	delete me;
	delete src;
	
	return 0;
}