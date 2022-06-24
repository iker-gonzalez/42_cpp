/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 10:13:15 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/24 12:03:44 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void) {

    std::cout << "---- 1️⃣ SUBJECT TEST ----" << std::endl;
    Span sp = Span(5);
    try{
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(11);
        sp.addNumber(9);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "---- 2️⃣ NOT ENOUGH NUMBERS TEST ----" << std::endl;
    Span sp1 = Span(4);
    try{
        sp1.addNumber(5);
        std::cout << sp1.shortestSpan() << std::endl;
        std::cout << sp1.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "---- 3️⃣ VECTOR FULL TEST ----" << std::endl;
    Span sp2 = Span(5);
    try{
        sp2.addNumber(5);
        sp2.addNumber(3);
        sp2.addNumber(17);
        sp2.addNumber(11);
        sp2.addNumber(9);
        sp2.addNumber(12);
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "---- 4️⃣  MORE THAN 1000 NUMBERS TEST ----" << std::endl;
    Span sp3 = Span(15000);
    try{
        srand(time(NULL));
        sp3.addManyNumbers();
        std::cout << sp3.shortestSpan() << std::endl;
        std::cout << sp3.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
