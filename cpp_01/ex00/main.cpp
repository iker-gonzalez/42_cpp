/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:24:42 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/09 18:55:28 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{

    std::cout << "creating the first zombie, Jimmy, manually\n";
    Zombie jimmy("Jimmy");
    jimmy.announce();
    
    std::cout << "creating the second zombie, Richard, using the function newZombie\n";
    Zombie *richard = newZombie("Richard");
    richard->announce();
    delete richard;

    std::cout << "creating the third zombie, Maureen, using the function randomchump\n";
    randomChump("Maureen");
}