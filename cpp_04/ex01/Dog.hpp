/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:38:16 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/25 12:04:54 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {

    private:

        Brain *brain;

    public:

        Dog(void);
        Dog(Dog const &obj);
        ~Dog(void);

        virtual Dog &operator=(Dog const &obj);

        void makeSound(void);

        Brain	*getBrain( void ) const;

};

#endif