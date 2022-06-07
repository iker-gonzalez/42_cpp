/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:52:59 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/07 13:32:23 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm: public Form {

	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(Bureaucrat const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &obj);

		~ShrubberyCreationForm(void);
		
        //ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);
		
		void execute(Bureaucrat const & executor) const;
};


#endif