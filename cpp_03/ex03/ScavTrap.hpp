/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:21:05 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/30 12:31:47 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
    
    public:

        int _energyPoints;

        //constructors
        ScavTrap(void);
        ScavTrap(std::string new_name);
        ScavTrap(ScavTrap const &obj);

        //destructor
        ~ScavTrap(void);

        //assignation operator overload
        ScavTrap &operator=(ScavTrap const &obj);

        //methods
        void attack(std::string const &target);
        void guardGate(void);
};

#endif