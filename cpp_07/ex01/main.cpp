/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 08:54:51 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/14 09:09:01 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
	
	std::cout << "INTEGER TEST ⒑" << std::endl;
	int const arr_int[5] = {4, 3, 5, 2, 1};
	int length = 5;
	iter(arr_int, length, print);
	std::cout << "------------" << std::endl;
	
	std::cout << "CHAR TEST ฬ" << std::endl;
	char const arr_ch[5] = {'a', 'b', 'c', 'd', 'f'};
	iter(arr_ch, length, print);
	std::cout << "------------" << std::endl;
	
	std::cout << "STRING TEST 🐩" << std::endl;
	std::string const arr_str[5] = {"paco", "de", "lucia", "cantaor", "flamenco"};
	iter(arr_str, length, print);
	std::cout << "------------" << std::endl;
}