/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:28:41 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/31 11:38:17 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter {
	
	private:
	
	std::string _name;
	AMateria *_inventory[3];
	
	public:
	
		Character(void);
		Character(std::string new_name);
		Character(Character const &obj);
		
		~Character(void);
		
		Character &operator=(Character const &obj);
		
		virtual std::string const & getName() const;
		
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);
};