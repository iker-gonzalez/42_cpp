/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:28:41 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/03 11:42:02 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter {
	
	private:
	
	std::string _name;
	AMateria *_inventory[4];
	
	public:
	
		Character(void);
		Character(std::string new_name);
		Character(Character const &obj);
		
		~Character(void);
		
		Character &operator=(Character const &obj);
		
		std::string const & getName() const;
		
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif