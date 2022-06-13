/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 10:59:18 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/13 11:28:17 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>
#include <iomanip>

template <typename T>
void swap(T var1, T var2) {

	T var3;
	
	var3 = var1;
	var1 = var2;
	var2 = var3;
	std::cout << "var1: " << var1 << std::endl;
	std::cout << "var2: " << var2 << std::endl;
	std::cout << "--------------" << std::endl;
}

template <typename T>
T min(T var1, T var2) {
	
	if (var1 >= var2)
		return var2;
	return var1;
}

#endif