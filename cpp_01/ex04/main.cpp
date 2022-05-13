/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:42:44 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/13 10:39:58 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	error(std::string err)
{
	std::cout << "Error: " << err << std::endl;
	return(1);
}

bool	setFile(std::string file, std::string s1, std::string s2)
{
    std::ifstream f(file);
	std::ofstream outfile;
	std::string	line;


	outfile.open(file, std::ios::out | std::ios::in);
	while(std::getline(f, line))
	{
		std::size_t pos = line.find(s1);
		if (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
		}
		std::cout << line << std::endl;
		outfile.open(file);
		outfile << line;
	}
	return true;
}

int main (int argc, char **argv)
{
	std::fstream	file;
	std::string		str;
	
	if (argc != 4)
		return(error("Wrong number of arguments"));
	if (!setFile(argv[1], argv[2], argv[3]))
		return(error("Could not set the file"));
}