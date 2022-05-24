/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:57:54 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/24 10:01:28 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {

    ClapTrap zor ("Zor");
    ScavTrap jon ("Jon");
    FragTrap jim ("Jim");

    zor.attack("Jon");
    jon.takeDamage(zor.getAtackDamage());
    jim.highFivesGuys();

    jon.beRepaired(10);
    jim.attack("Jon");
    jon.takeDamage(jim.getAtackDamage());
    jon.attack("Zor");
    zor.takeDamage(jon.getAtackDamage());

    zor.attack("Jon");
    zor.beRepaired(20);
    jim.beRepaired(50);
    jon.guardGate();
}