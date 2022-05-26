/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:27:53 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/26 11:00:52 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

std::ostream &operator<<(std::ostream &out, Animal const &fixed);

std::ostream &operator<<(std::ostream &out, Animal const &obj)
{
	out << "Animal: " << obj.getType() << std::endl;
	return (out);
}

#define NUMBER_OF_ANIMALS 10

int main (void) {

    Animal *animals[NUMBER_OF_ANIMALS];
    Brain *brain;
    int i = 0;
    
    while (i < NUMBER_OF_ANIMALS) {
        if (i % 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        i++;
    }
    std::cout << "-----------------" << std::endl;
    //std::cout << *(animals[4]) << std::endl;
    brain = animals[4]->getBrain();
    brain->setIdeas("I want to play!", 0);
	brain->setIdeas("When will you arrive home?", 1);
	brain->setIdeas("Pet me, please!", 2);
	brain->setIdeas("I want to eat!", 3);
	std::cout << animals[4]->getBrain()->getIdeas(2) << std::endl;

	*(animals[2]) = *(animals[4]);
	std::cout << animals[2]->getBrain()->getIdeas(2) << std::endl;
    
    //std::cout << "Brain: " << brain << std::endl;*/

    std::cout << "-----------------" << std::endl;

    for (i = 0; i < NUMBER_OF_ANIMALS; i++) {
        delete animals[i];
    }
}