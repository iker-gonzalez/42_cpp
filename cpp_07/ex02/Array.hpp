/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 09:26:26 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/14 10:59:49 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <class T>
class Array {
	
	private:
		T *_arr;
		unsigned int _size;
	
	public:
	
		Array(void): _arr(NULL), _size(0) {
			std::cout << "Array default constructor called" << std::endl;
		}
		
		Array(unsigned int n): _size(n) {
			std::cout << "Array parameter constructor called" << std::endl;
			if (_size)
				_arr = new T(n);
		}
		
		Array(Array const &obj) {
			std::cout << "Array copy constructor called" << std::endl;
			_arr = new T();
			*this = obj;
		}
		
		~Array(void) {
			std::cout << "Array default destructor called" << std::endl;
			if (_size)
				delete[] _arr;
		}
		
		Array &operator=(Array const &obj) {
			std::cout << "Array asignment operator overload called" << std::endl;
			_size = obj._size;
			for (unsigned int i = 0; i < _size; i++)
				_arr[i] = obj._arr[i];
			return *this;
		}
		
		T& operator[](unsigned int index) {
			std::cout << "Array access operator overload called" << std::endl;
			if (index >= _size || index < 0)
        		throw OutOfRange();
			return (_arr[index]);
		}
		
		unsigned int size(void) {
			return(_size);
		}
		
		class OutOfRange : public std::exception{
			public:
			virtual const char *what() const throw();
		};
		
		const char *Array::OutOfRange::what(void) const throw(){
    		return ("[❌]Accessing out of range member");
		}
		
};

#endif