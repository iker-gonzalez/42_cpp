/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:57:46 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/21 10:14:28 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main(int argc, char **argv) {
    
    if (argc != 2) {
        std::cout << "Invalid arguments (2)" << std::endl;
        return (1);
    }
    Scalar fortytwo(argv[1]);
    fortytwo.searchType();
    fortytwo.setDataType();
    fortytwo.convert();
}