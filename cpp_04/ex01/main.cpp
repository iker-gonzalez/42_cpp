/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:27:53 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/02 13:45:56 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define NUMBER_OF_ANIMALS 3

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
    Cat rufo;

    //we set rafa's idea on index 0 and display it
    rafa.getBrain()->setIdeas("I want to play!", 1);
    std::cout << rafa.getBrain()->getIdeas(1) << std::endl;
    //we assign both objects
    rufo = rafa;
    
    //we print rufo's idea, which would be the same as rafa's if the copy is succesful
    std::cout << rufo.getBrain()->getIdeas(1) << std::endl;
    
    //we change rafa's idea on index 0. As long as the memory address is different (we have allocated new memory on constructors), 
    //if we change the value on one this WON'T change on both
    rafa.getBrain()->setIdeas("I want to eat!", 1);
    
    std::cout << rufo.getBrain()->getIdeas(1) << std::endl;
    std::cout << rafa.getBrain()->getIdeas(1) << std::endl;
    
   /*std::cout << "--------  SHALLOW COPY  --------" << std::endl;

    Dog yurre;
    Dog spike;
    
    //we set yurre's idea on index 0 and display it
    yurre.getBrain()->setIdeas("I want to play!", 0);
    std::cout << yurre.getBrain()->getIdeas(0) << std::endl;
    
    //we assign both objects
    spike = yurre;
    
    //we print spike's idea, which would be the same as yurre's if the copy is succesful
    std::cout << spike.getBrain()->getIdeas(0) << std::endl;
    
    //we change yurre's idea on index 0. As long as the memory address is the same in both objects, 
    //if we change the value on one this WILL change on both
    yurre.getBrain()->setIdeas("I want to eat!", 0);

    std::cout << spike.getBrain()->getIdeas(0) << std::endl;
    std::cout << yurre.getBrain()->getIdeas(0) << std::endl;*/
}