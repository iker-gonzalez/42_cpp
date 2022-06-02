/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:13:39 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/02 11:35:06 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
	
	public:
	
		Ice(void);
		Ice(std::string const &type);
		Ice(Ice const &obj);
		~Ice(void);
		
		Ice &operator=(Ice const &obj);
		
		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);
};

#endif