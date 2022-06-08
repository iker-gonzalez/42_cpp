/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:41:49 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/08 18:58:48 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {

	private:

		std::string const	_name;
		bool				_status;
		int const	_gradeToSign;
		int const	_gradeToExecute;

	public:
	
		Form(void);
		Form(std::string const new_name, int gradeToSign, int gradeToExecute);
		Form(Form const &obj);
		
		~Form(void);
		
        Form &operator=(Form const &obj);
		
		//getters
		std::string const& getName(void) const;
		bool const& getStatus(void) const;
		int const& getGradeToSign(void) const;
		int const& getGradeToExecute(void) const;

		void	setStatus(void);

		void  beSigned(Bureaucrat const &obj);
		virtual void execute(Bureaucrat const & executor) const = 0;

		//exceptions
		class GradeTooHighException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
		class FormNotSigned : public std::exception{
			public:
				virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Form const &fixed);

#endif