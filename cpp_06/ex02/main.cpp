/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:45:18 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/23 10:30:43 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <time.h>

Base* generate(void) {
	
	srand (time(NULL));
	int random = rand() % 3;
	if (random == 0)
		return(new A());
	else if (random == 1)
		return(new B());
	else
		return(new C());
}

void identify (Base* p) {

	std::cout << std::endl;
	std::cout << "---- Identify by pointer ----" << std::endl;
	A *ptrA = dynamic_cast<A*>(p);
	if (ptrA != NULL)
		std::cout << "Type: A" << std::endl;
	B *ptrB = dynamic_cast<B*>(p);
	if (ptrB != NULL)
		std::cout << "Type: B" << std::endl;
	C *ptrC = dynamic_cast<C*>(p);
	if (ptrC != NULL)
		std::cout << "Type: C" << std::endl;
	std::cout << std::endl;
}

void identify (Base& p) {

	std::cout << "---- Identify by reference ----" << std::endl;
	
	try {
		A &refA = dynamic_cast<A&>(p);
		std::cout << "Type: A" << std::endl;
		(void)&refA;
	}
	catch(std::bad_cast &bc) {
		std::cout << "A => " << bc.what() << std::endl;
	}

	try {
		B &refB = dynamic_cast<B&>(p);
		std::cout << "Type: B" << std::endl;
		(void)&refB;
	}
	catch(std::bad_cast &bc) {
		std::cout << "B => " << bc.what() << std::endl;
	}

	try {
		C &refC = dynamic_cast<C&>(p);
		std::cout << "Type: C" << std::endl;
		(void)&refC;
	}
	catch(std::bad_cast &bc) {
		std::cout << "C => " << bc.what() << std::endl;
	}

	std::cout << std::endl;
}

int main(void) {

	Base* type = generate();
	identify(type);
	identify(*type);
	delete type;
	return 0;
}