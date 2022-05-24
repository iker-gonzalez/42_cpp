/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:52:19 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/24 08:57:37 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

    public:

        //constructors
        FragTrap(void);
        FragTrap(std::string new_name);
        FragTrap(FragTrap const &obj);

        //destructor
        ~FragTrap(void);

        //assignation operator overload
        FragTrap &operator=(FragTrap const &obj);

        //methods
        void attack(std::string const &target);
        void highFivesGuys(void);
};

#endif