/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:55:38 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/03/30 16:55:18 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int main() {
    
    Contact contact[8];
    std::string command;
    int i;
    
    i = 0;
    while (command != "EXIT")
    {
        std::cout << "\nPHONEBOOK\n";
        std::cout << "\nEnter your command [ADD, SEARCH, EXIT]\n\n";
        std::cin >> command;

        
        if (command == "ADD")
        {
           contact[i].add_contact();
           contact[i].view_contact();
           i++;
        }
    }
    return (0);
    
}