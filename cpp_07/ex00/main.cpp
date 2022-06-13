/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 10:54:34 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/13 12:45:27 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "template.hpp"

int main (void) {

	int a = 5;
	int b = 42;
	
	swap<int>(a, b);
	
	char c = 'c';
	char d = 'd';
	swap<char>(c, d);
	
	int e = 9;
	int f = 10;
	int minimum;
	
	minimum = min<int>(e, f);
	std::cout << minimum << std::endl;
	std::cout << "--------" << std::endl;
	
	double g = 5.744f;
	double i = 6.25f;
	
	std::cout << g << std::endl;
	std::cout << min<float>(g, i) << std::endl;
	//std::cout << minimum << std::setprecision(2) << std::endl;
	std::cout << "--------" << std::endl;
	
}