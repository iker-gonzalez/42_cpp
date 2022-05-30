/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:16:34 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/30 11:32:47 by ikgonzal         ###   ########.fr       */
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
    brain = new Brain (*obj.brain);
    return(*this);
}

void Cat::makeSound(void){
    std::cout << "Miaaauuuuu" << std::endl;
}

Brain	*Cat::getBrain( void ) const {
    return(this->brain);
}

