/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 09:04:51 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/09 10:25:22 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	
	public:
	
		Intern(void);
		Intern(Intern const &obj);
		
		~Intern(void);
		
		Intern &operator=(Intern const &obj);
		
		Form*	makeForm(std::string formName, std::string target);
		Form 	*cloneShrubbery(std::string &target);
		Form 	*cloneRobotomy(std::string &target);
		Form 	*clonePresidential(std::string &target);
};

#endif