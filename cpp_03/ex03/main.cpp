/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:57:54 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/24 10:15:24 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {

    ScavTrap jon ("Jon");
    FragTrap jim ("Jim");
    DiamondTrap zor ("Zor");

   /* zor.attack("Jon");
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
    jon.guardGate();*/

    //zor.whoAmI();	
	zor.attack("Kim");
	zor.highFivesGuys();
	zor.guardGate();
	zor.takeDamage(100);
	zor.beRepaired(10);
}