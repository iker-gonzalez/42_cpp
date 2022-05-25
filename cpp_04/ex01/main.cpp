/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:27:53 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/25 13:10:32 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

std::ostream &operator<<(std::ostream &out, Animal const &fixed);

std::ostream &operator<<(std::ostream &out, Animal const &obj)
{
	out << "Animal: " << obj.getType() << std::endl;
	return (out);
}

#define NUMBER_OF_ANIMALS 10

int main (void) {

    Animal animals[NUMBER_OF_ANIMALS];
    int i = 0;
    int dogs = 5;
    int cats = 5;
    
    while (i < NUMBER_OF_ANIMALS) {
        if (dogs) {
            animals[i] = Dog();
            dogs--;
        }
        else if (cats) {
            
            animals[i] = Cat();
            cats--;
        }
        i++;
        std::cout << "PEEE" << std::endl;
    }
    for (i = 0; i < NUMBER_OF_ANIMALS; i++)
        std::cout << animals[i] << std::endl;
}