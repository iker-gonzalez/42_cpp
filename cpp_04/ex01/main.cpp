/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:27:53 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/31 08:45:14 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define NUMBER_OF_ANIMALS 10

int main (void) {

    Animal *animals[NUMBER_OF_ANIMALS];
    int i = 0;
    
    while (i < NUMBER_OF_ANIMALS) {
        if (i % 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        i++;
    }

    std::cout << "-------  DELETE  --------" << std::endl;

    for (i = 0; i < NUMBER_OF_ANIMALS; i++) {
        delete animals[i];
    }

    std::cout << "--------  DEEP COPY  --------" << std::endl;

    Cat rafa;
    Cat rufo(rafa);
    
    rafa.getBrain()->setIdeas("I want to play!", 0);
    std::cout << rafa.getBrain()->getIdeas(0) << std::endl;
    rufo.getBrain()->setIdeas("I want to play!", 0);
    std::cout << rufo.getBrain()->getIdeas(0) << std::endl;
    rufo.getBrain()->setIdeas("I want to eat!", 0);
    std::cout << rufo.getBrain()->getIdeas(0) << std::endl;
    std::cout << rafa.getBrain()->getIdeas(0) << std::endl;
    
   /*std::cout << "--------  SHALLOW COPY  --------" << std::endl;

    Dog yurre;
    Dog spike(yurre);
    
    yurre.getBrain()->setIdeas("I want to play!", 0);
    std::cout << yurre.getBrain()->getIdeas(0) << std::endl;
    spike.getBrain()->setIdeas("I want to play!", 0);
    std::cout << spike.getBrain()->getIdeas(0) << std::endl;
    rufo.getBrain()->setIdeas("I want to eat!", 0);
    std::cout << spike.getBrain()->getIdeas(0) << std::endl;
    std::cout << yurre.getBrain()->getIdeas(0) << std::endl;*/
}