/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:38:59 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/26 10:56:04 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
    std::cout << "Dog default constructor called" << std::endl;
    _type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(Dog const &obj) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = obj;
}

Dog::~Dog(void) {
    std::cout << "Dog default destructor called" << std::endl;
    delete this->brain;
}

Dog &Dog::operator=(Dog const &obj) {
    std::cout << "Dog assignation operator overload called" << std::endl;
    this->Animal::operator=(obj);
    _type = obj._type;
    //shallow copy
    std::cout << "Dog (shallow copy):" << std::endl;
    std::cout << &brain << std::endl;
    std::cout << &obj.brain << std::endl;
    brain = obj.brain;
    //brain = new Brain(*obj.brain);
    std::cout << &brain << std::endl;
    std::cout << &obj.brain << std::endl;
    return(*this);
}

void Dog::makeSound(void){
    std::cout << "Guaaauguauu" << std::endl;
}

Brain	*Dog::getBrain( void ) const {
    return(this->brain);
}
