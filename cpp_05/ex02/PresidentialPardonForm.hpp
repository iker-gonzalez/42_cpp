/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonPresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:47:25 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/07 11:47:25 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form {

	public:
	
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const &obj);
		PresidentialPardonForm(std::string const &target);
		
		~PresidentialPardonForm(void);
		
        PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);

		void action(Bureaucrat const & executor) const;


};


#endif