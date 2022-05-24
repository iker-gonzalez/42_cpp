/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:29:30 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/24 12:01:01 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {

    Cat rafa;
    Animal anm;
    Dog yurre;

    rafa.makeSound();
    anm.makeSound();
    yurre.makeSound();

    //missing this part
    WrongAnimal remo;
    WrongCat cai;

    remo.makeSound();
    cai.makeSound();
}