/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:56:33 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/03/30 11:12:04 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact {
    
    private:

        int index;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        int phone_number;
        std::string darkest_secret;

    public:

        Contact();
        Contact(std::string new_first_name, std::string new_last_name, std::string new_nickname, int new_phone_number, std::string new_secret);
        void    add_contact();
        void    view_contact();
};