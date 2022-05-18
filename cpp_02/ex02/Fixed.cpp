/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:13:30 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/18 13:18:23 by ikgonzal         ###   ########.fr       */
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
	this->value = roundf(floater * (1 << fractional_bits));
}

//destructor

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

// copy constructor

Fixed & Fixed::operator=(const Fixed& old_obj) {

	std::cout << "Assignation operator called" << std::endl;
	this->value = old_obj.getRawBits();
	return(*this);
}

// comparison operator overloads

bool Fixed::operator>(Fixed const &obj) const{

	return(this->getRawBits() > obj.getRawBits());
}

bool Fixed::operator<(Fixed const &obj) const {

	return(this->value < obj.getRawBits());
}

bool Fixed::operator<=(Fixed const &obj) const {

	return(this->value <= obj.getRawBits());
}

bool Fixed::operator>=(Fixed const &obj) const {

	return(this->value >= obj.getRawBits());
}

bool Fixed::operator==(Fixed const &obj) const {

	return(this->value == obj.getRawBits());
}

bool Fixed::operator!=(Fixed const &obj) const {

	return(this->value != obj.getRawBits());
}

// arithmetic operator overloads

Fixed Fixed::operator+(Fixed const &obj) {

	Fixed ret;
	
	ret.setRawBits(this->getRawBits() + obj.getRawBits());
	return(ret);
}

Fixed Fixed::operator-(Fixed const &obj) {

	Fixed ret;
	
	ret.setRawBits(this->getRawBits() - obj.getRawBits());
	return(ret);
}

Fixed Fixed::operator*(Fixed const &obj) {
	
	Fixed ret;
	
	ret.setRawBits(this->toFloat() * obj.getRawBits());
	return(ret);
}

Fixed Fixed::operator/(Fixed const &obj) {

	Fixed ret;

	ret.setRawBits(this->getRawBits() / obj.getRawBits());
	return(ret);
}

// pre-post increment operator overloads

Fixed& Fixed::operator++(void) {
	
	this->value++;
	return(*this);
}

Fixed Fixed::operator++(int) {
	
	Fixed old_obj(*this);
	
	++(*this);
	return(old_obj);
}

Fixed& Fixed::operator--(void) {
	
	this->value--;
	return(*this);
}

Fixed Fixed::operator--(int) {
	
	Fixed old_obj(*this);
	
	--(*this);
	return(old_obj);
}

// min-max

Fixed &Fixed::min(Fixed &x, Fixed &y) {
	
	if (x < y)
		return(x);
	return(y);
}

Fixed const &Fixed::min(Fixed const &x, Fixed const &y) {
	
	if (x < y)
		return(x);
	return(y);
}

Fixed &Fixed::max(Fixed &x, Fixed &y) {
	
	if (x < y)
		return(x);
	return(y);
}

Fixed const &Fixed::max(Fixed const &x, Fixed const &y) {
	
	if (x > y)
		return(x);
	return(y);
}

// conversion from fixed point

float Fixed::toFloat( void ) const {
	
	return((float)(this->value) / (float)(1 << fractional_bits));
}

int Fixed::toInt( void ) const {
	
	return ((int)(this->value >> this->fractional_bits));
}

// getter - setter

int	Fixed::getRawBits(void) const {

	return(this->value);
}

void	Fixed::setRawBits(int const raw) {

	this->value = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}
