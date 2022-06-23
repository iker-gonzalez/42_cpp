/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:39:10 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/23 09:40:26 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(void) {
    std::cout << "Base default constructor called" << std::endl;
}

Base::~Base(void) {
    std::cout << "Base default destructor called" << std::endl;
}