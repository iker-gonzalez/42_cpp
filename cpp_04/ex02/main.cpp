/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:29:30 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/03 11:20:07 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main(void) {


    std::cout << "--------  INIT ABSTRACT CLASS  --------" << std::endl;
    
    Cat peru;
    //Animal anm; //abstract class can't be initialized
    Dog yurre;

    peru.makeSound();
    //anm.makeSound();
    yurre.makeSound();
    
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
    

}