/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:13:04 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/03 11:50:17 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {

	public:
	
		Cure(void);
		Cure(std::string const &type);
		Cure(Cure const &obj);
		~Cure(void);
		
		Cure &operator=(Cure const &obj);
		
		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);

};

#endif