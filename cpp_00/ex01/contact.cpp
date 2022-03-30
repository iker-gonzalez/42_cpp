/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:06:48 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/03/30 17:05:45 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact contact;

Contact::Contact()
{
    this->index=0;
}
/*
Contact::Contact(std::string new_first_name, std::string new_last_name, std::string new_nickname, int new_phone_number, std::string new_secret)
{
    first_name = new_first_name;
    last_name = new_last_name;
    nickname = new_nickname;
    phone_number = new_phone_number;
    darkest_secret = new_secret;
}
*/
void    Contact::add_contact() {
        /*
        std::string new_first_name;
        std::string new_last_name;
        std::string new_nickname;
        int new_phone_number;
        std::string new_darkest_secret;*/
        
        std::cout << "\nEnter your first name: ";
        std::cin >> first_name;
        std::cout << "\nEnter your last name: ";
        std::cin >> last_name;
        std::cout << "\nEnter your nickname: ";
        std::cin >> nickname;
        std::cout << "\nEnter your phone number: ";
        std::cin >> phone_number;
        std::cout << "\nEnter your darkest secret: ";
        std::cin >> darkest_secret;

        
        //Contact contact(new_first_name, new_last_name, new_nickname, new_phone_number, new_darkest_secret);
}

void    Contact::view_contact() {
    
    std::cout << "\n";
    std::cout << "First Name: " << first_name << "\n";
    std::cout << "Last Name: " << last_name << "\n";
    std::cout << "Nickname: " << nickname << "\n";
    std::cout << "Phone Number: " << phone_number << "\n";
    std::cout << "Darkest secret: " << darkest_secret << "\n";
}