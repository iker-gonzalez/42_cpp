/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:31:34 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/03/24 18:54:34 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    std::string str;
    int i;
    size_t k;
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i = 1;
        while (argv[i])
        {
            k = 0;
            str = argv[i];
            while (k < str.length())
                std::cout << (char)std::toupper(str[k++]);
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}