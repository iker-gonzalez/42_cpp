/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:42:44 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/12 13:31:17 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	error(std::string err)
{
	std::cout << "Error: " << err << std::endl;
	return(1);
}

int main (int argc, char **argv)
{
	std::fstream	file;
	std::string		str;
	
	if (argc != 4)
		return(error("Wrong number of arguments"));
	file.open(argv[1]);
}