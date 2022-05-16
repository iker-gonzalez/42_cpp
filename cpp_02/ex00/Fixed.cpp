/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:13:30 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/16 12:23:20 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &old_obj) {
	
	std::cout << "Copy constructor called" << std::endl;
	this->value = old_obj.getRawBits();
}

Fixed::~Fixed(void) {
	
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	
	std::cout << "getRawBits member function called" << std::endl;
	return(this->value);
}

void	Fixed::setRawBits(int const raw) {
	
	this->value = raw;
}

Fixed & Fixed::operator=(const Fixed& old_obj) {
	
	std::cout << "Assignation operator called" << std::endl;
	this->value = old_obj.getRawBits();
	return(*this);
}
