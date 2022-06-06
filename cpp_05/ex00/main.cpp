/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:23:40 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/06 11:30:10 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void) {
	
	Bureaucrat jonny("jonny", 3);
	std::cout << jonny << std::endl;
	jonny.incrementGrade();
	std::cout << jonny << std::endl;
	jonny.incrementGrade();
	std::cout << jonny << std::endl;
	jonny.incrementGrade();
	std::cout << jonny << std::endl;
	jonny.decrementGrade();
	std::cout << jonny << std::endl;

	
}