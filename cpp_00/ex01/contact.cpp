/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:06:48 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/10 13:33:55 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

// getters

std::string	Contact::getFirstName(void)
{
	return(this->first_name);
}

std::string	Contact::getLastName(void)
{
	return(this->last_name);
}

std::string	Contact::getNickName(void)
{
	return(this->nickname);
}

std::string	Contact::getPhoneNumber(void)
{
	return(this->phone_number);
}

std::string	Contact::getDarkestSecret(void)
{
	return(this->darkest_secret);
}

// setters

void	Contact::setFirstName(std::string new_first_name)
{
	this->first_name = new_first_name;
}

void	Contact::setLastName(std::string new_last_name)
{
	this->last_name = new_last_name;
}

void	Contact::setNickName(std::string new_nickname)
{
	this->nickname = new_nickname;
}

void	Contact::setPhoneNumber(std::string new_phone_number)
{
	this->phone_number = new_phone_number;
}

void	Contact::setDarkestSecret(std::string new_darkest_secret)
{
	this->darkest_secret = new_darkest_secret;
}


Contact::Contact()
{
    this->index=0;
}

Contact::~Contact(){}

int		Contact::ft_isdigit(std::string phone_number) {
	
	int i;

	i = 0;
	while (phone_number[i])
	{
		if (phone_number[i] < 48 || phone_number[i] > 57)
			return (0);
		i++;
	}
	return(1);
}

void    Contact::set_contact(int index) {
        
		this->index = index;
        std::cout << "\nEnter your first name: ";
        std::cin >> this->first_name;
        std::cout << "\nEnter your last name: ";
        std::cin >> this->last_name;
        std::cout << "\nEnter your nickname: ";
        std::cin >> this->nickname;
        std::cout << "\nEnter your phone number: ";
        std::cin >> this->phone_number; 
		while (!ft_isdigit(phone_number))
		{
			std::cout << "\n**Only numeric argument allowed.**\n Enter a valid phone number: ";
			std::cin >> this->phone_number;
		}
        std::cout << "\nEnter your darkest secret: ";
        std::cin >> this->darkest_secret;
}

void    Contact::view_contact() {
    
    std::cout << "\n";
    std::cout << "First Name: " << this->first_name << "\n";
    std::cout << "Last Name: " << this->last_name << "\n";
    std::cout << "Nickname: " << this->nickname << "\n";
    std::cout << "Phone Number: " << this->phone_number << "\n";
    std::cout << "Darkest secret: " << this->darkest_secret << "\n";
}

void Contact::display_header()
{
	// Index
	std::cout << "|" << std::setw(10) << this->index;
	std::cout << "|";
	/// First name 
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->first_name;
	std::cout << "|";
	/// Last name
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->last_name;
	std::cout << "|";
	/// Nickname
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->nickname;
	std::cout << "|" << std::endl;
}

