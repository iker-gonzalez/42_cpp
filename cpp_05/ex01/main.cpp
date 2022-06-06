/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:41:39 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/06 19:18:39 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

    // jonny can sign pandora
    Form pandora("pandora", 4, 1);
    std::cout << pandora << std::endl;
    pandora.beSigned(jonny);

    jonny.decrementGrade();
	std::cout << jonny << std::endl;
    jonny.decrementGrade();
	std::cout << jonny << std::endl;
    // jonny can't sign gurtel
    Form gurtel("gurtel", 2, 1);
    std::cout << gurtel << std::endl;
    gurtel.beSigned(jonny);

    

}