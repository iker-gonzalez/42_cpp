/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:05:39 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/03/31 13:23:46 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(){
	
	this->amount = 0;
};

void Phonebook::add_contact(void)
{
	static int x;
	static int y;
	
	if (this->amount >= 8)
	{
		std::cout << std::endl;
		std::cout << "# The directory is full !" << std::endl;
		std::cout << "# The oldest contact will be replaced by this one." << std::endl;
		if (x == 0)
			x = 1;
		this->contacts[y].set_contact(x);
		y++;
		x++;
		if (x == 9)
			x = 1;
		if (y == 8)
			y = 0;
	}
	else
	{
		this->contacts[this->amount].set_contact(this->amount + 1);
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
	if (index > 0 && index < 9)
		this->contacts[index - 1].view_contact();
	else
		std::cout << "\nInvalid input. Try again.\n";
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



