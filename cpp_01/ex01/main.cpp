/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:10:34 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/17 10:29:58 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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