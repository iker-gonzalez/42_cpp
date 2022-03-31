/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:05:39 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/03/31 12:04:46 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(){
	
	this->amount = 0;
};

void Phonebook::add_contact(void)
{
	if (this->amount >= 8)
	{
		std::cout << std::endl;
		std::cout << "# The directory is full !" << std::endl;
		std::cout << "# The oldes contact will be replaced by this one." << std::endl;
		this->update_index();
		this->contacts[0].set_contact(8);
	}
	else
	{
		this->contacts[this->amount].set_contact(this->amount);
		this->amount++;
	}
}

void Phonebook::update_index() {
	
	for (int i = 0; i < 8; i++) {
		this->contacts[i].update_index();
	}
}

void Phonebook::search_contact() {
	
	int index;
	
	this->search_header();
	std::cout << "\nType index of the desired entry: ";
	std::cin >> index;
	if (index >= 0)
		this->contacts[index].view_contact();
}


void Phonebook::search_header(void)
{
	std::cout << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->amount; i++)
		this->contacts[i].display_header();
	std::cout << "|-------------------------------------------|" << std::endl;
}



