/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:59:42 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/11 17:33:17 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
    return ;
}

Zombie::Zombie(std::string name) {
    
    this->name = name;
}

Zombie::~Zombie(void) {

    Zombie::sayName();
    std::cout << "has been killed\n";
}

void    Zombie::announce()
{
    Zombie::sayName();
    std::cout << "BraiiiiiiinnnzzzZ\n";
}

void    Zombie::sayName(void)
{
    std::cout << this->name << " ";
}

std::string    Zombie::getName(void)
{
    return(this->name);
}

void    Zombie::setName(std::string new_name)
{
    this->name = new_name;
}
