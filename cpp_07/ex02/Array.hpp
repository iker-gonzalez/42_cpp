/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 09:26:26 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/16 18:54:50 by ikgonzal         ###   ########.fr       */
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
			_size = obj.size();
			if (_size != 0)
				_arr = new T(_size);
			unsigned int i = 0;
			while (i < _size) {
				_arr[i] = obj._arr[i];
				i++;
			}
		}
		
		~Array(void) {
			std::cout << "Array default destructor called" << std::endl;
			if (_size)
				delete[] _arr;
		}
		
		Array &operator=(Array const &obj) {
			std::cout << "Array asignment operator overload called" << std::endl;
			if (this == &obj)
				return *this;
			_size = obj._size;
			for (unsigned int i = 0; i < _size; i++)
				_arr[i] = obj._arr[i];
		}
		
		 unsigned int size(void) const {
			return(_size);
		}
		
		class OutOfRange : public std::exception{
			public:
			virtual const char *what() const throw() {
				return ("[❌]Accessing out of range member");
			}
		};
		
		T& operator[](unsigned int index) {
			std::cout << "Array access operator overload called" << std::endl;
			if (index > _size || index < 0)
				throw OutOfRange();
			return (_arr[index]);
		}
		
};

#endif