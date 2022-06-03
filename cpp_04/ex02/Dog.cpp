/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:38:59 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/03 11:16:06 by ikgonzal         ###   ########.fr       */
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
    brain = new Brain();
    *this = obj;
}

Dog::~Dog(void) {
    delete this->brain; // comment for testing shallow copy
    std::cout << "Dog default destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &obj) {
    std::cout << "Dog assignation operator overload called" << std::endl;
    _type = obj._type;
    *(brain) = *(obj.brain); //this line copies the content of brain which has been previously allocated on constructors.
    //brain = obj.brain; //uncomment for shallow copy
    return(*this);
}

void Dog::makeSound(void){
    std::cout << "Guaaauguauu" << std::endl;
}

Brain	*Dog::getBrain( void ) const {
    return(this->brain);
}