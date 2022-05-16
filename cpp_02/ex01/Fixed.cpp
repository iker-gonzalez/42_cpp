/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:13:30 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/16 14:00:57 by ikgonzal         ###   ########.fr       */
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

Fixed::Fixed(const int integer) {

	std::cout << "Int constructor called" << std::endl;
	this->value = integer / (1 << fractional_bits);
	std::cout << this->value << std::endl;
}

Fixed::Fixed(const float floater) {

	std::cout << "Float constructor called" << std::endl;
	this->value = floater * (1 << fractional_bits);
	std::cout << this->value << std::endl;
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
