/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:02:32 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/10 12:48:23 by ikgonzal         ###   ########.fr       */
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

        Phonebook(void);
        ~Phonebook(void);
		void add_contact();
		void search_contact();
		void search_header(void);

};