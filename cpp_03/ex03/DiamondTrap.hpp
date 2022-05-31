/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:34:40 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/31 12:22:14 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {

    private:

        std::string _name;

    public:

        //constructors
        DiamondTrap(void);
        DiamondTrap(std::string new_name);
        DiamondTrap(DiamondTrap const &obj);

        //destructor
        ~DiamondTrap(void);

        //assignation operator overload
        DiamondTrap &operator=(DiamondTrap const &obj);

        //methods
        using ScavTrap::attack;
        void whoAmI();
};

#endif