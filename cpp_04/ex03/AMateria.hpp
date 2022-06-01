/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:46:06 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/01 12:13:49 by ikgonzal         ###   ########.fr       */
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

		AMateria(std::string const &type);
		virtual ~AMateria(void) {};

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
		
		std::string const & getType(void) const; //Returns the materia type
};

std::ostream &operator<<(std::ostream &out, AMateria const &fixed);

#endif
