/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:58:19 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/23 13:48:58 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap {

    protected:
    
        std::string _name;
        int _hitpoints;
        int _energyPoints;
        int _attackDamage;

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