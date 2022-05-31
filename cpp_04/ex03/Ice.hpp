/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:13:39 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/31 10:16:39 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria {
	
	protected:
	
		std::string _type;

	public:
	
		Ice(void);
		Ice(std::string const &type);
		Ice(Ice const &obj);
		Ice(AMateria const &obj);
		~Ice(void);
		
		Ice &operator=(Ice const &obj);
		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);
};

#endif