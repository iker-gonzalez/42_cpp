/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:46:06 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/30 13:24:00 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

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
	//virtual void use(ICharacter &target);
	
	std::string const & getType() const; //Returns the materia type
};

#endif
