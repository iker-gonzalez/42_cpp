/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:03:41 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/22 17:25:39 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data {

	private:
	
		int			_int;
		char		_char;
		bool		_bool;
		std::string	_string;

	public:

		Data(void);
		Data(int newInt);
		Data(bool newBool);
		Data(std::string newString);
		Data(Data const &obj);

		~Data(void);

		Data &operator=(Data const &obj);

		int			getInt(void);
		bool		getBool(void);
		std::string	getString(void);

};

		uintptr_t	serialize(Data* ptr);
		Data*		deserialize(uintptr_t raw);
#endif