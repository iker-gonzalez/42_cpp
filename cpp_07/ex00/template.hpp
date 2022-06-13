/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 10:59:18 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/13 18:55:41 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>
#include <iomanip>

template <typename T>
void swap(T &var1, T &var2) {

	T var3;
	
	var3 = var1;
	var1 = var2;
	var2 = var3;
}

template <typename T>
T min(T var1, T var2) {
	
	if (var1 >= var2)
		return var2;
	return var1;
}

template <typename T>
T max(T var1, T var2) {
	
	if (var1 <= var2)
		return var2;
	return var1;
}

#endif