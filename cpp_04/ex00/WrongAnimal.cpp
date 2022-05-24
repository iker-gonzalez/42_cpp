/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:07:38 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/24 11:16:08 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = obj;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &obj) {
    std::cout << "WrongAnimal assignation operator overload called" << std::endl;
    _type = obj._type;
    return (*this);
}

void WrongAnimal::makeSound(void) {
    std::cout << "Undefined animal should not make a sound" << std::endl;
}