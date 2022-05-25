/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:02:05 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/25 12:04:12 by ikgonzal         ###   ########.fr       */
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

        void makeSound(void);

	    const std::string	&getType( void ) const ;
};

#endif