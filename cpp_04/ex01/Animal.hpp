/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:02:05 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/02 14:38:29 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {

    protected:

        std::string _type;

    public:

        Animal(void);
        Animal(Animal const &obj);
        virtual ~Animal(void);

        Animal &operator=(Animal const &obj);

        virtual void makeSound(void);

	    const std::string	&getType( void ) const ;
        virtual Brain		*getBrain( void ) const = 0;
};

std::ostream &operator<<(std::ostream &out, Animal const &fixed);

#endif