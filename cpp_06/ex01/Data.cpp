/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:06:01 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/22 17:25:07 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) {
	std::cout << "Data default constructor called" << std::endl;
}

Data::Data(int newInt): _int(newInt) {
	std::cout << "Data INT constructor called" << std::endl;
}

Data::Data(bool newBool): _bool(newBool) {
	std::cout << "Data BOOL constructor called" << std::endl;
}

Data::Data(std::string newString): _string(newString) {
	std::cout << "Data STRING constructor called" << std::endl;
}

Data::Data(Data const &obj) {
	std::cout << "Data copy constructor called" << std::endl;
	*this = obj;
}

Data &Data::operator=(Data const &obj) {
	std::cout << "Data assignment operator overload called" << std::endl;
	if (this != &obj)
	{
		_int = obj._int;
		_char = obj._char;
		_bool = obj._bool;
		_string = obj._string;
	}
	return *this;
}


Data::~Data(void) {
	std::cout << "Data default destructor called" << std::endl;
}

//getters

int	Data::getInt(void) {
	return(_int);
}

bool	Data::getBool(void) {
	return(_bool);
}

std::string	Data::getString(void) {
	return(_string);
}

//serialization functions

uintptr_t serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return(reinterpret_cast<Data*>(raw));
}
