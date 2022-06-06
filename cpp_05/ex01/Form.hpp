/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:41:49 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/06 12:11:38 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form {

	private:

		std::string const	_name;
		bool				_signed;
		int static const	_gradeToSign;
		int static const	_gradeToExecute;

	public:
	
		Form(void);
		Form(std::string const new_name, int gradeToSign, int gradeToExecute);
		Form(Form const &obj);
		
		~Form(void);
		
        Form &operator=(Form const &obj);
		
		//getters
		std::string const& getName(void) const;
		bool const& getSigned(void) const;
		int const& getGradeToSign(void) const;
		int const& getGradeToExecute(void) const;
		
};

#endif