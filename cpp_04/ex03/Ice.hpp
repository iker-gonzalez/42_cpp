/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:13:39 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/30 13:39:38 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
	
	protected:
	
		std::string _type;
		
	public:
	
		Ice(void);
		Ice(std::string const &type);
		Ice(Ice const &obj);
		~Ice(void);
		
		Ice &operator=(Ice const &obj);
		AMateria *clone() const;
};

#endif