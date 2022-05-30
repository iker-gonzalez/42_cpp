/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:29:30 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/30 12:27:34 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {

    Cat rafa;
    Animal *anm;
    Dog yurre;

    anm = new Dog();
    rafa.makeSound();
    anm->makeSound();
    yurre.makeSound();


    std::cout << "------------------------" << std::endl;

    WrongAnimal *remo;
    WrongCat cai;

    remo = new WrongCat();
    remo->makeSound();
    cai.makeSound();
}