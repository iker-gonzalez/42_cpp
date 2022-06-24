/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 09:23:30 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/24 12:08:58 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <time.h>

Span::Span(void): _N(0) {
	std::cout << "Span default constructor called" << std::endl;
	_vec.clear();
}

Span::Span(unsigned int N): _N(N) {
	std::cout << "Span parameter constructor called" << std::endl;
	_vec.clear();
}

Span::Span(Span const &obj) {
	std::cout << "Span copy constructor called" << std::endl;
	*this = obj; 
}

Span &Span::operator=(Span const &obj) {
	std::cout << "Span assignment operator overload called" << std::endl;
	if (this != &obj) {
		_N = obj._N;
		_vec = obj._vec;
	}
	return *this;
}

Span::~Span(void) {
	std::cout << "Spand default destructor called" << std::endl;
	_vec.clear();
}

//member functions

void    Span::addNumber(int number) {
	if (_vec.size() == _N)
		throw ContainerIsFull();
	_vec.push_back(number);
}

int Span::longestSpan(void) {
	if (_vec.size() < 2)
		throw NotEnoughNumbers();
		
    std::vector<int>::iterator max_result;
    max_result = std::max_element(_vec.begin(), _vec.end());
	int max_it = std::distance(_vec.begin(), max_result);

	std::vector<int>::iterator min_result;
	min_result = std::min_element(_vec.begin(), _vec.end());
	int min_it = std::distance(_vec.begin(), min_result);

	return (_vec[max_it] - _vec[min_it]);
}

int Span::shortestSpan(void) {

	if (_vec.size() < 2)
		throw NotEnoughNumbers();
	int shortestSpan;
	std::vector<int>::iterator it = _vec.begin();
    int max_int = std::numeric_limits<int>::max();
	int tmp2 = std::numeric_limits<int>::max();;
    int tmp = 0;
	while (it != _vec.end()) {
		tmp = (abs(*it - (*(++it))));
		if (tmp < max_int && tmp < tmp2) {
			shortestSpan = tmp;
			tmp2 = tmp;
		}
	}
	return (shortestSpan);
}

int Span::nbGenerator(void){

    int nb = rand() % 10001;
 	return nb; 
}

void Span::addManyNumbers(void){
    std::vector<int> v(_N);
    std::generate_n(v.begin(), _N, nbGenerator);
	std::vector<int>::iterator it = _vec.begin();
	_vec.insert(it,v.begin(),v.end());
}

//exceptions

const char *Span::NotEnoughNumbers::what(void) const throw() {
	return("❌ Not enough numbers on the container");
}

const char *Span::ContainerIsFull::what(void) const throw() {
	return("❌ Can't add more numbers. The container is full");
}
