/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:56:12 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/02 11:01:57 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	
	private:
	
		const std::string	_name;
		int					_grade;
		
	public:
	
		Bureaucrat(void);
		Bureaucrat(const std::string new_name, int new_grade);

		~Bureaucrat(void);

		void incrementGrade(int increment);
		void decrementGrade(int decrement);
		
		std::string const& getName(void) const;
		int const& getGrade(void) const;

};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &fixed);

#endif