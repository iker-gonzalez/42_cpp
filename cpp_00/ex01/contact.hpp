/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:56:33 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/10 12:49:28 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	
	private:

		int index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	public:

		Contact();
		~Contact( void );
		void		set_contact(int index);
		void		display_header();
		void		view_contact();
		static int	ft_isdigit(std::string phone_number);
		
		//getters
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkestSecret(void);
		
		//setters
		void	setFirstName(std::string new_first_name);
		void	setLastName(std::string new_first_name);
		void	setNickName(std::string new_first_name);
		void	setPhoneNumber(std::string new_first_name);
		void	setDarkestSecret(std::string new_first_name);

};