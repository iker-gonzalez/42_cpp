/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:00:36 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/12 10:24:42 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
	
	private:
	
		std::string	_type;
		
	public:

		Weapon(void);
		Weapon(std::string weapon);
		~Weapon(void);
		std::string&	getType(void);
		void	setType(std::string new_type);
};

#endif