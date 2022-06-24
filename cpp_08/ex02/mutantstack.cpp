/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:16:56 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/24 13:43:42 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack(void): std::stack<T>() {
	std::cout << "MutantStack default constructor called" << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &obj): std::stack<T>(obj) {
	std::cout << "MutantStack copy constructor called" << std::endl;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &obj) {
	std::cout << "MutantStack assignment operator overload called" << std::endl;
	if (this != &obj)
        *this = obj;
	return *this;
}

template<typename T>
MutantStack<T>::~MutantStack(void) {
	std::cout << "MutantStack default destructor called" << std::endl;
}

//iterators
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}

//reverse iterators

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(void)
{
	return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(void)
{
	return (this->c.rend());
}
