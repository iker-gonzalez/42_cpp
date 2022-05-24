/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:16:34 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/24 11:26:37 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
    std::cout << "WrongCat default constructor called" << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &obj) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = obj;
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &obj) {
    std::cout << "WrongCat assignation operator overload called" << std::endl;
    _type = obj._type;
    return(*this);
}

void WrongCat::makeSound(void){
    std::cout << "Miaaauuuuu" << std::endl;
}