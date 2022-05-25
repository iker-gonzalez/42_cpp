/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:16:34 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/25 12:21:09 by ikgonzal         ###   ########.fr       */
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
}

Cat::~Cat(void) {
    std::cout << "Cat default destructor called" << std::endl;
    delete this->brain;
}

Cat &Cat::operator=(Cat const &obj) {
    std::cout << "Cat assignation operator overload called" << std::endl;
    _type = obj._type;
    *brain = *(obj.brain);
    return(*this);
}

void Cat::makeSound(void){
    std::cout << "Miaaauuuuu" << std::endl;
}

