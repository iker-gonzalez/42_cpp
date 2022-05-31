/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:46:06 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/31 11:26:26 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		
		std::string _type;

	public:

	AMateria(void);
	AMateria(AMateria const &obj);
	AMateria(std::string const &type);
	~AMateria(void);

	AMateria &operator=(AMateria const &obj);
	
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);
	
	std::string const & getType(void) const; //Returns the materia type
};

std::ostream &operator<<(std::ostream &out, AMateria const &fixed);

#endif
