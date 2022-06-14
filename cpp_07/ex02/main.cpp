/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:35:53 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/14 10:55:39 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
	
	//Default constructor
	Array<int> numbers;

	//Parameter constructor
	Array<int> numbers2(6);
	numbers2[3] = 5;
	
	//Copy constructor & assignment operator
	Array<int> numbers3(numbers2);
	
	// Member function size
	std::cout << numbers.size() << std::endl;
	std::cout << numbers2.size() << std::endl;
	
	
	
}