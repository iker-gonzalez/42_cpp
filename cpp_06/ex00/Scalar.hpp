/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:57:43 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/20 18:07:06 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>

class Scalar {

	private:
		std::string _input;
		std::string _type;
		bool		_char;
		bool		_int;
		bool		_float;
		bool		_decimal;

	public:

		Scalar(void);
		Scalar(std::string input);
		Scalar(Scalar const &obj);

		Scalar &operator=(Scalar const &obj);

		~Scalar(void);

		std::string getType(void) const;

		void searchType(void);
		void findChar(std::string s, bool *dataType, std::string input);
		void setDataType(void);
};

std::ostream &operator<<(std::ostream &out, Scalar const &fixed);


#endif