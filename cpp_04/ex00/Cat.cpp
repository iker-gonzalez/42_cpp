/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:16:34 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/24 11:26:37 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Cat default constructor called" << std::endl;
    _type = "Cat";
}

Cat::Cat(Cat const &obj) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = obj;
}

Cat::~Cat(void) {
    std::cout << "Cat default destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &obj) {
    std::cout << "Cat assignation operator overload called" << std::endl;
    _type = obj._type;
    return(*this);
}

void Cat::makeSound(void){
    std::cout << "Miaaauuuuu" << std::endl;
}