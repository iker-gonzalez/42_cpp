/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:07:38 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/26 09:27:15 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &obj) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = obj;
}

Animal::~Animal(void) {
    std::cout << "Animal default destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &obj) {
    std::cout << "Animal assignation operator overload called" << std::endl;
    _type = obj._type;
    return (*this);
}

void Animal::makeSound(void) {
    std::cout << "Undefined animal should not make a sound" << std::endl;
}

const std::string	&Animal::getType( void ) const {
    return(this->_type);
}
