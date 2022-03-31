/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:55:38 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/03/31 10:14:44 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main() {
    
    Phonebook phonebook;
    std::string command;
    
    while (command != "EXIT")
    {
        std::cout << "\nPHONEBOOK\n";
        std::cout << "\nEnter your command [ADD, SEARCH, EXIT]\n\n";
        std::cin >> command;
        if (command == "ADD")
        	phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
    }
    return (0);
    
}