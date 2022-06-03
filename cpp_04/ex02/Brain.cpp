/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:17:36 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/02 13:26:36 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &obj) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = obj;
}

Brain::~Brain(void) {
    std::cout << "Brain default destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &obj) {
    std::cout << "Brain assignation operator overload called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = obj.ideas[i];
    return *this;
}

std::string Brain::getIdeas(int nb) {
    return(this->ideas[nb]);
}

void Brain::setIdeas(std::string idea, int nb) {
    this->ideas[nb] = idea;
}