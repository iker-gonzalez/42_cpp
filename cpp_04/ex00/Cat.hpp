/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:16:18 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/03 10:31:45 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {

    public:

        Cat(void);
        Cat(Cat const &obj);
        ~Cat(void);

        Cat &operator=(Cat const &obj);
        void makeSound(void) const;
};

#endif