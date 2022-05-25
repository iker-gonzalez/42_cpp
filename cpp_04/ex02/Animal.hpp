/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:02:05 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/25 12:35:26 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

    protected:
        std::string _type;

    public:

        Animal(void);
        Animal(Animal const &obj);
        ~Animal(void);

        Animal &operator=(Animal const &obj);

        virtual void makeSound(void) = 0;
};

#endif