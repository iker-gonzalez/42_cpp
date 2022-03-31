/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:06:48 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/03/31 11:18:03 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact contact;

Contact::Contact()
{
    this->index=0;
}

void    Contact::set_contact(int index) {
        
		this->index = index;
        std::cout << "\nEnter your first name: ";
        std::cin >> first_name;
        std::cout << "\nEnter your last name: ";
        std::cin >> last_name;
        std::cout << "\nEnter your nickname: ";
        std::cin >> nickname;
        std::cout << "\nEnter your phone number: ";
        std::cin >> phone_number; // ft_isdigit()
        std::cout << "\nEnter your darkest secret: ";
        std::cin >> darkest_secret;

}

void    Contact::view_contact() {
    
    std::cout << "\n";
    std::cout << "First Name: " << first_name << "\n";
    std::cout << "Last Name: " << last_name << "\n";
    std::cout << "Nickname: " << nickname << "\n";
    std::cout << "Phone Number: " << phone_number << "\n";
    std::cout << "Darkest secret: " << darkest_secret << "\n";
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

void Contact::update_index() {
	
	this->index = this->index - 1;
}
