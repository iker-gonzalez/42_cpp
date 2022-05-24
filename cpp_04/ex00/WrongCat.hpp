/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:16:18 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/24 11:55:58 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

    public:

        WrongCat(void);
        WrongCat(WrongCat const &obj);
        ~WrongCat(void);

        WrongCat &operator=(WrongCat const &obj);
        void makeSound(void);
};

#endif