/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:16:34 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/26 10:55:30 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Cat default constructor called" << std::endl;
    _type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(Cat const &obj) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = obj;
    std::cout << "holaa" << std::endl;
}

Cat::~Cat(void) {
    std::cout << "Cat default destructor called" << std::endl;
    delete this->brain;
}

Cat &Cat::operator=(Cat const &obj) {
    std::cout << "Cat assignation operator overload called" << std::endl;
    _type = obj._type;
    //deep copy
    std::cout << "Cat (deep copy):" << std::endl;
    std::cout << &brain << std::endl;
    std::cout << &obj.brain << std::endl;
    brain = new Brain(*obj.brain);
    std::cout << &brain << std::endl;
    std::cout << &obj.brain << std::endl;
    return(*this);
}

void Cat::makeSound(void){
    std::cout << "Miaaauuuuu" << std::endl;
}

Brain	*Cat::getBrain( void ) const {
    return(this->brain);
}

