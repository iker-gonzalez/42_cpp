/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:16:18 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/25 12:20:47 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {

    private:

        Brain *brain;

    public:

        Cat(void);
        Cat(Cat const &obj);
        ~Cat();

        Cat &operator=(Cat const &obj);
        void makeSound(void);
};

#endif