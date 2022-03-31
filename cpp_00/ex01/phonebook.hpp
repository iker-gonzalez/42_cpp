/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:02:32 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/03/31 10:50:51 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "contact.hpp"

class Phonebook {
    
    private:

        Contact contacts[8];
        int amount;

    public:

        Phonebook();
		void add_contact();
		void search_contact();
		void search_header(void);
		void update_index();
};