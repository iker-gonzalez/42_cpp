/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:13:30 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/17 09:38:15 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//constructors

Fixed::Fixed(void) {

	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &old_obj) {

	std::cout << "Copy constructor called" << std::endl;
	*this = old_obj;
}

Fixed::Fixed(const int integer) {

	std::cout << "Int constructor called" << std::endl;
	this->value = integer << fractional_bits;
}

Fixed::Fixed(const float floater) {

	std::cout << "Float constructor called" << std::endl;
	this->value = floater * (1 << fractional_bits);
}

//destructor

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

//getter - setter

int	Fixed::getRawBits(void) const {

	return(this->value);
}

void	Fixed::setRawBits(int const raw) {

	this->value = raw;
}

// conversion from fixed point

float Fixed::toFloat( void ) const {
	
	return((float)(this->value) / (float)(1 << fractional_bits));
}

int Fixed::toInt( void ) const {
	
	return ((int)(this->value >> this->fractional_bits));
}

//overload operators

Fixed & Fixed::operator=(const Fixed& old_obj) {

	std::cout << "Assignation operator called" << std::endl;
	this->value = old_obj.getRawBits();
	return(*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}
