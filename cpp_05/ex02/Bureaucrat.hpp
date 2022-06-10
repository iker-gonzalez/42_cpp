/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:56:12 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/10 12:02:22 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>

class Form;

class Bureaucrat {
	
	private:
	
		const std::string	_name;
		int					_grade;

	public:
	
		Bureaucrat(void);
		Bureaucrat(const std::string new_name, int new_grade);
		Bureaucrat(Bureaucrat const &obj);

		~Bureaucrat(void);
		
		
        Bureaucrat &operator=(Bureaucrat const &obj);

		void incrementGrade();
		void decrementGrade();
		
		std::string const& getName(void) const;
		int const& getGrade(void) const;

		void	signForm(Form &target);

		virtual void executeForm(Form const & form);
		
		/*Exceptions*/
		class GradeTooHighException : public std::exception{
			public:
				virtual const char *what() const throw();
    	};
    	class GradeTooLowException : public std::exception{
        	public:
    			virtual const char *what() const throw();
    };

};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &fixed);

#endif