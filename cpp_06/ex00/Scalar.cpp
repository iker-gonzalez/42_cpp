/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:10:09 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/21 11:30:24 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"
#include <limits>

Scalar::Scalar(void): _type("unkown"), _char(false), _int(false), _float(false), _decimal(false) {
	std::cout << "Scalar default constructor has been called" << std::endl;
}

Scalar::Scalar(std::string input): _input(input), _type("unkown"), _char(false), _int(false), _float(false), _decimal(false) {
	std::cout << "Scalar parameter constructor has been called" << std::endl;
}

Scalar::~Scalar(void) {
	std::cout << "Scalar parameter destructor has been called" << std::endl;
}

Scalar::Scalar(Scalar const &obj) {
	std::cout << "Scalar copy constructor called" << std::endl;
	*this = obj;
}

Scalar &Scalar::operator=(Scalar const &obj) {
	std::cout << "Scalar assignment operator overload called" << std::endl;
	if (this != &obj)
	{
		_input = obj._input;
		_type = obj._type;
		_char = obj._char;
		_int = obj._int;
		_float = obj._float;
		_decimal = obj._decimal;
	}
	return (*this);
}


std::string Scalar::getType(void) const {
	return(_type);
}

std::ostream &operator<<(std::ostream &out, Scalar const &obj)
{
	out << "Data type: " << obj.getType() << std::endl;
	return (out);
}

void Scalar::findChar(std::string s, bool *dataType, std::string input) {

	int pos = -1;
	while(std::string::npos != input.find(s, ++pos))
		*dataType = true;
}

void Scalar::searchType(void) {
	
   int i = -1;
   std::string array_number[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
   while (++i < 10) {
		findChar(array_number[i], &_int, _input);
		findChar("f", &_float, _input);
		findChar(".", &_decimal, _input);
		//findChar("-", &_idxNegative, _input);
		//findChar("+", &_idxPositive, _input);
	}
}

void Scalar::setDataType(void) {

	if (!_int && _input.length() == 1)
		_type = "char";
	else if (!_decimal)
		_type = "integer";
	else if (_decimal && !_float)
		_type = "double";
	else if (_decimal && _float)
		_type = "float";
	findSpecialCharacters();
	if (_type == "integer" || _type == "float" || _type == "double")
		findLimit();
}

void Scalar::findSpecialCharacters(void) {

	std::string special[6] = {"-inff", "+inff", "-inf", "+inf", "nanf", "nan"};
	for (int i = 0; i < 6; i++) {
		if (!_input.compare(special[i]))
			_type = special[i];
	}
}

void Scalar::findLimit(){

	if (std::atol(_input.c_str()) >= std::numeric_limits<long>::max() || std::atol(_input.c_str()) <= std::numeric_limits<long>::min())
		_type = "impossible";
}


// Conversions

void Scalar::convertFromChar(void)
{
   char c = _input[0];

   std::cout << "Char: "  << "'" << static_cast<char>(c)  << "'" << std::endl;
   std::cout << "Int: " << static_cast<int>(c) << std::endl;
   std::cout << "Float: " << static_cast<float>(c) << ".0f" << std::endl;
   std::cout << "Double: " << static_cast<double>(c) << ".0" <<std::endl;
}

void Scalar::convertFromInt(void)
{
	int in = std::atoi(_input.c_str());

	if (in < 0 || in > 127)
		std::cout << "Char: impossible" << std::endl;
	else if (in >= 0 && in <= 31)
		std::cout << "Char: Non displayable" << std::endl;
	else
		std::cout << "Char: " << "'" << static_cast<char>(in) << "'" << std::endl;
	std::cout << "Int: " << static_cast<int>(in) << std::endl;
	std::cout << "Float: " << static_cast<float>(in) << ".0f" << std::endl;
	std::cout << "Double: " << static_cast<double>(in) << ".0" << std::endl;
}

void Scalar::convertFromFloat(void)
{
	//float fl =  std::stof(_input.c_str());
	 std::string sub = _input.substr(_input.find(".") + 1, _input.length() - 1);
	 std::cout << sub << std::endl;

}



void Scalar::convert(void) {

	if (_type == "char")
		convertFromChar();
	else if (_type == "integer")
		convertFromInt();
	else if (_type == "float")
		convertFromFloat();
	else if(_type == "impossible") {
		std::cout << "Char: impossible"  << std::endl;
		std::cout << "Int: impossible"  << std::endl;
		std::cout << "Float: impossible"  << std::endl;
		std::cout << "Double: impossible"  << std::endl;
	}
}


