/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 09:21:14 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/24 12:05:06 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>

class Span {

	private:

		unsigned int		_N;
		std::vector<int>	_vec;

	public:

		Span(void);
		Span(unsigned int N);
		Span(Span const &obj);

		~Span(void);

		Span &operator=(Span const &obj);

		void addNumber(int number);
		int shortestSpan(void);
		int longestSpan(void);
		int numberGenerator(void);
		void addManyNumbers(void);
		static int nbGenerator(void);
		

		//exceptions
		class NotEnoughNumbers : public std::exception{
			public:
				virtual const char *what() const throw();
    	};
		class ContainerIsFull : public std::exception{
			public:
				virtual const char *what() const throw();
    	};
};

#endif
