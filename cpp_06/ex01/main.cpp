/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:38:07 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/22 18:15:23 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void) {

	Data *getData;
	uintptr_t raw;

	std::cout << "---- TEST [ 1️⃣ ] INT CONVERSION  ----" << std::endl;
	std::string s = "pepe";
	Data *ptr = new Data(33);

	std::cout << "Before serialize: " << ptr->getInt() << std::endl;
	raw = serialize(ptr);
	
	std::cout << "After serialize: " << raw << std::endl;
	getData = deserialize(raw);
	
	std::cout << "After deserialize: " << getData->getInt() << std::endl;
	delete ptr;

	std::cout << "------ [ 2️⃣ ] TEST - BOOL CONVERSION ------" << std::endl;
   ptr = new Data(true);

   std::cout << "Before serialize: " << ptr->getBool() << std::endl;
   raw = serialize(ptr);
   
   std::cout << "After serialize: " << raw << std::endl;   
   getData = deserialize(raw);
   
   std::cout << "After deserialize: " << getData->getBool() << std::endl;
   delete ptr;

   std::cout << "------ [ 3️⃣ ] TEST - STRING CONVERSION ------" << std::endl;
   std::string str = "pepe";
   ptr = new Data(str);

   std::cout << "Before serialize: " << ptr->getString() << std::endl;
   raw = serialize(ptr);
   std::cout << "After serialize: " << raw << std::endl;   
   getData = deserialize(raw);
   
   std::cout << "After deserialize: " << getData->getString() << std::endl;
   delete ptr;
}