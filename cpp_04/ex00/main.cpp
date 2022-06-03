/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:29:30 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/03 10:57:34 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
/*
int main(void) {

    Cat rafa;
    Animal *anm;
    Dog yurre;

    anm = new Dog();
    rafa.makeSound();
    anm->makeSound();
    yurre.makeSound();

    std::cout << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << std::endl;

    WrongAnimal *remo;
    WrongCat cai;

    remo = new WrongCat();
    remo->makeSound();
    cai.makeSound();
    
    delete anm;
    delete remo;
}*/


int main(void) {
    

    const Animal* meta = new Animal();
    const Animal* yurre = new Dog();
    const Animal* rafa = new Cat();
    
    std::cout << yurre->getType() << " " << std::endl;
    std::cout << rafa->getType() << " " << std::endl;
    
    yurre->makeSound(); //will output the dog sound!
    rafa->makeSound();  //will output the cat sound!
    meta->makeSound();  //will output the animal sound!
    
    std::cout << std::endl;
    std::cout << "------WRONG ANIMAL---------" << std::endl;
    std::cout << std::endl;
    
    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* rufo = new WrongCat();
    
    std::cout << rufo->getType() << " " << std::endl;
    
    meta2->makeSound();  //will output the animal sound!
    rufo->makeSound();  //will output the animal sound!
}