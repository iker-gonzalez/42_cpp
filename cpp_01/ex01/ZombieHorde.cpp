/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:21:21 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/11 17:27:55 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i;
	
	Zombie *zombieHorde = new Zombie[N];
	i = 0;
	while(i <= N)
	{
		zombieHorde[i].setName(name);
		i++;
	}
	return (zombieHorde);
}