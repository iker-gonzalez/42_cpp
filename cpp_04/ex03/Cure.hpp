/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:13:04 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/01 12:10:53 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
	
	protected:
	
		std::string _type;

	public:
	
		Cure(void);
		Cure(std::string const &type);
		//Cure(Cure const &obj);
		~Cure(void);
		
		Cure &operator=(Cure const &obj);
		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);

};

#endif