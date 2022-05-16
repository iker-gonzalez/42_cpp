/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:59:23 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/16 13:57:45 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	
	private:
	
		int value;
		const static int fractional_bits = 8;
	
	
	public:
	
		Fixed(void);
		Fixed (const Fixed &old_obj);
		Fixed(const int integer);
		Fixed(const float floater);
		~Fixed(void);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed& operator= (const Fixed &old_obj);
};




#endif