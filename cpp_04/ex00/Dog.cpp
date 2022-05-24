/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:38:59 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/24 11:39:25 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
    std::cout << "Dog default constructor called" << std::endl;
    _type = "Dog";
}

Dog::Dog(Dog const &obj) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = obj;
}

Dog::~Dog(void) {
    std::cout << "Dog default destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &obj) {
    std::cout << "Dog assignation operator overload called" << std::endl;
    _type = obj._type;
    return(*this);
}

void Dog::makeSound(void){
    std::cout << "Guaaauguauu" << std::endl;
}