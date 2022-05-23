/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:57:54 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/23 11:09:13 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {

    ClapTrap zor = ClapTrap("Zor");
    ClapTrap peru = ClapTrap("Peru");

    zor.attack("Peru");
    peru.takeDamage(zor.getHitPoints());
    std::cout << "Peru has " << peru.getEnergyPoints() << " energy points" << std::endl;

    zor.attack("Peru");
    peru.takeDamage(zor.getHitPoints());
    std::cout << "Peru has " << peru.getEnergyPoints() << " energy points" << std::endl;

    peru.beRepaired(10);
    std::cout << "Peru has " << peru.getEnergyPoints() << " energy points" << std::endl;
    
    zor.attack("Peru");
    peru.takeDamage(zor.getHitPoints());
    std::cout << "Peru has " << peru.getEnergyPoints() << " energy points" << std::endl;

}