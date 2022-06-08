/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:41:39 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/08 19:07:49 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void) {

    std::cout << "[1️⃣ ]TEST 1. INVALID INPUT (GRADE SIGN TOO LOW)" << std::endl;
    try {
        Form p1("insurance", 151, 25);
        std::cout << "[✅]All Form created" << std::endl;
        }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;}
    
    
    std::cout << std::endl << "[2️⃣ ]TEST 2. INVALID INPUT (GRADE EXECUTE TOO HIGH)" << std::endl;
    try {
        Form p1("car", 100, 0);
        std::cout << "[✅]All Form created" << std::endl;
        }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
        }

    std::cout << std::endl << "[3️⃣]TEST 3. SIGN THE FORM" << std::endl;
    try
    {  
        Form p1("telephone", 25, 100);
        Form p2("insurance", 18, 90);
        Form p3("car", 14, 14);
		std::cout << std::endl;
        Bureaucrat b1("Maureen", 15);
        std::cout << b1;
		std::cout << std::endl;
        std::cout << p1;
        std::cout << p2;
        std::cout << p3;
		std::cout << std::endl;
        std::cout << "[✅]All Forms created" << std::endl;
        b1.signForm(p1);
        b1.signForm(p2);
        b1.signForm(p3);
        std::cout << p1;
        std::cout << p2;
        std::cout << p3;
        b1.incrementGrade();
        b1.signForm(p3);
        std::cout << p3 << std::endl;
    }
     catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return (0);

}