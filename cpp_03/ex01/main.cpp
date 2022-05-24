/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:57:54 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/24 10:01:49 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {

    ClapTrap zor ("Zor");
    ScavTrap jon ("Jon");

    zor.attack("Jon");
    jon.takeDamage(zor.getAtackDamage());

    jon.beRepaired(10);
    jon.attack("Zor");
    zor.takeDamage(jon.getAtackDamage());

    zor.attack("Jon");
    zor.beRepaired(20);
    jon.guardGate();
}