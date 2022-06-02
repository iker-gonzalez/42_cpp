/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:02:05 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/24 11:10:35 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

    protected:
        std::string _type;

    public:

        WrongAnimal(void);
        WrongAnimal(WrongAnimal const &obj);
        virtual ~WrongAnimal(void);

        WrongAnimal &operator=(WrongAnimal const &obj);

        void makeSound(void);
};

#endif