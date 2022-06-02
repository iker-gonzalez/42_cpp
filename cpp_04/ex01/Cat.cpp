/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:16:34 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/02 13:41:32 by ikgonzal         ###   ########.fr       */
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
    brain = new Brain ();
    *this = obj;
}

Cat::~Cat(void) {
    delete this->brain;
    std::cout << "Cat default destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &obj) {
    std::cout << "Cat assignation operator overload called" << std::endl;
    _type = obj._type;
    *(brain) = *(obj.brain); //this line copies the content of brain which has been previously allocated on constructors.
    //brain = obj.brain; //shallow copy
    return(*this);
}

void Cat::makeSound(void){
    std::cout << "Miaaauuuuu" << std::endl;
}

Brain	*Cat::getBrain( void ) const {
    return(this->brain);
}

