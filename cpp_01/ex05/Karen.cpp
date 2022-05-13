/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:10:46 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/13 14:22:06 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {}

Karen::~Karen(void) {}

void	Karen::complain(std::string level)
{
	void (Karen::*p) (void) = NULL;
	int i = 0;
	std::string options[] = {"DEBUG","INFO","WARNING","ERROR"};
	
	while (i <= 3)
	{
		if (!options[i].compare(level))
			break;
		i++;
	}
	switch(i) {
		case 0:
			p = &Karen::debug;
			(this->*(p))();
			break;
		case 1:
			p = &Karen::info;
			(this->*(p))();
			break;
		case 2:
			p = &Karen::warning;
			(this->*(p))();
			break;
		case 3:
			p = &Karen::error;
			(this->*(p))();
			break;
	}
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
	std::cout << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money.";
	std::cout << "You don’t put enough! If you did I would not have to ask for it!";
	std::cout << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been";
	std::cout << "coming here for years and you just started working here last month.";
	std::cout << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}