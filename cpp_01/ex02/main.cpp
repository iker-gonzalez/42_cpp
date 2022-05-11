/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:13:47 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/11 18:25:56 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	
	std::cout << "address in memory of the string: " << &str << std::endl;
	std::cout << "address of the string by using strintPTR: " << stringPTR << std::endl;
	std::cout << "address of the string by using strintREF: " << &stringREF << std::endl;
	std::cout << "display the string by using strintPTR: " << *stringPTR << std::endl;
	std::cout << "display the string by using strintREF: " << stringREF << std::endl;
}