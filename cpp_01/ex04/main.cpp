/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:42:44 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/17 11:31:03 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	error(std::string err)
{
	std::cout << "Error: " << err << std::endl;
	return(1);
}

bool	replace(std::string file, std::string s1, std::string s2)
{
    std::ifstream f(file);
	std::ofstream outfile;
	std::string	line;
	std::size_t length = 0;
	std::size_t pos = 0;
	
	if (!f.is_open())
		return false;
	if (file == "")
		return false;
	outfile.open(file.append("REPLACE"), std::ios::out);
	while(std::getline(f, line))
	{
		while (length != line.length())
		{
			pos = line.find(s1);
			length = line.length();
			if (pos <= line.length())
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
			}
		}
		outfile << line << std::endl;
	}
	if (f.is_open())
		f.close();
	if (outfile.is_open())
		outfile.close();
	return true;
}

int main (int argc, char **argv)
{
	std::fstream	file;
	std::string		str;
	
	if (argc != 4)
		return(error("Wrong number of arguments"));
	if (!argv[1])
		return(error("Empty file"));
	if (!argv[2] || !argv[3])
		return(error("Empty string"));
	if (!replace(argv[1], argv[2], argv[3]))
		return(error("Could not set the file"));
}