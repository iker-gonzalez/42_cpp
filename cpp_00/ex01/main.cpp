/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:55:38 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/03/30 11:30:11 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int main() {
    
    Contact contact;
    std::string command;
    
    while (command != "EXIT")
    {
        std::cout << "\nPHONEBOOK\n";
        std::cout << "\nEnter your command [ADD, SEARCH, EXIT]\n\n";
        std::cin >> command;

        
        if (command == "ADD")
        {
           contact.add_contact();
           contact.view_contact();
        }
    }
    return (0);
    
}