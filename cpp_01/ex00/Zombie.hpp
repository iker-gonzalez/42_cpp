/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:51:04 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/09 18:43:43 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    
    private:

        std::string name;
        void    sayName(void);


    public:

        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
        std::string getName(void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif