/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:38:59 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/30 11:40:55 by ikgonzal         ###   ########.fr       */
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
    brain = obj.brain;
    //brain = new Brain(*obj.brain);
    return(*this);
}

void Dog::makeSound(void){
    std::cout << "Guaaauguauu" << std::endl;
}

Brain	*Dog::getBrain( void ) const {
    return(this->brain);
}
