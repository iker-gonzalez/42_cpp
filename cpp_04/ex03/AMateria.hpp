/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:46:06 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/02 11:39:41 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		
		std::string _type;

	public:

		AMateria(void);
		AMateria(std::string const &type);
		
		virtual ~AMateria(void);

		AMateria &operator=(AMateria const &obj);

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
		
		std::string const & getType(void) const; //Returns the materia type
};

std::ostream &operator<<(std::ostream &out, AMateria const &fixed);

#endif
