/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:16:21 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/12 11:29:10 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) 
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	std::cout << "-----------\n";
	Weapon cleb = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(cleb);
	jim.attack();
	cleb.setType("some other type of club");
	jim.attack();
}