/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:10:34 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/11 18:05:34 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
	Zombie *zombie;
	int i;
	
	zombie = zombieHorde(8, "pepe");
	i = 0;
	while (i < 8)
	{
		zombie[i].announce();
		i++;
	}
	delete[] zombie;
	return(0);
}