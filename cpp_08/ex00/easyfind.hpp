/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:57:02 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/24 09:11:46 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
void    easyfind(T cont, int &x){
    if (std::end(cont) != std::find(begin(cont), end(cont), x))
        return ;
    throw (std::exception());
}

#endif
