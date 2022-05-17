/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:51:04 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/17 10:30:05 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	
	private:

		std::string name;
		void	sayName(void);


	public:

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
		std::string getName(void);
		void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif