/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:56:12 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/06 11:07:36 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	
	private:
	
		const std::string	_name;
		int					_grade;
		static const int	_gradeMax = 1;
		static const int	_gradeMin = 150;
		
	public:
	
		Bureaucrat(void);
		Bureaucrat(const std::string new_name, int new_grade);

		~Bureaucrat(void);

		void incrementGrade();
		void decrementGrade();
		
		std::string const& getName(void) const;
		int const& getGrade(void) const;
		
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