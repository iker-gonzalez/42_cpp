/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:58:19 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/23 14:12:44 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

    private:
    
        std::string _name;
        unsigned int _hitpoints;
        int _energyPoints;
        unsigned int _attackDamage;

    public:

        //construtors
        ClapTrap(void);
        ClapTrap(std::string new_name);
        ClapTrap(ClapTrap const &obj);

        //destructor
        ~ClapTrap(void);
        
        //assignation operator overload
        ClapTrap &operator=(ClapTrap const &obj);

        //methods
        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        //getters
        int  getHitPoints(void);
        int  getEnergyPoints(void);
        int  getAtackDamage(void);
};

#endif