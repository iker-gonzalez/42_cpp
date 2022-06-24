/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:56:48 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/24 09:12:42 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

#include <vector>
#include <deque>
#include <list>

void    printVals(int val) {
	std::cout << val << ", ";
}

template <typename T>
void    test(T &cont, int &val) {

	try {
		std::cout << "Find => " << val << " in the following container" << std::endl;
		for_each(cont.begin(), cont.end(), printVals);
		std::cout << std::endl;
		easyfind(cont, val);
		std::cout << " ✅ The container has the value " << val << std::endl;
	}
	catch(std::exception) {
		std::cout << "❌ There is no coincidence" << std::endl;
	}
	std::cout << std::endl;
}

int main(void){

	std::vector<int> vec;;
	std::deque<int> deq;;
	std::list<int> li;

	//values 
	int a = 3, b = 42, c = 8;

	//determinants
	int success = 42;
	int fail = 1;

	//vector
	vec.push_back(a);
	vec.push_back(b);
	vec.push_back(c);

	//deque
	deq.push_back(a);
	deq.push_back(b);
	deq.push_back(c);

	//list
	li.push_front(a);
	li.push_front(b);
	li.push_front(c);

	test(vec, success);
	test(vec, fail);
	test(deq, success);
	test(deq, fail);
	test(li, success);
	test(li, fail);

	return 0;
}
