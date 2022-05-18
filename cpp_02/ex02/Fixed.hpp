/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:59:23 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/18 13:16:16 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

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

		// copy constructor
		Fixed& operator=(const Fixed &old_obj);

		// comparison operator overloads
		bool operator>(Fixed const &obj) const;
		bool operator<(Fixed const &obj) const;
		bool operator<=(Fixed const &obj) const;
		bool operator>=(Fixed const &obj) const;
		bool operator==(Fixed const &obj) const;
		bool operator!=(Fixed const &obj) const;
		
		// arithmetic operator overloads
		Fixed operator+(Fixed const &obj);
		Fixed operator-(Fixed const &obj);
		Fixed operator*(Fixed const &obj);
		Fixed operator/(Fixed const &obj);

		// pre-post increment operator overloads
		Fixed& operator++(void); //pre
		Fixed operator++(int);   //post
		Fixed& operator--(void); 
		Fixed operator--(int); 

		// min-max
		static Fixed &min(Fixed &x, Fixed &y);
		static Fixed const &min(Fixed const &x, Fixed const &y);
		static Fixed &max(Fixed &x, Fixed &y);
		static Fixed const &max(Fixed const &x, Fixed const &y);

		// conversion from fixed point
		float toFloat( void ) const;
		int toInt( void ) const;

		// getter - setter
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
	
std::ostream& operator<<(std::ostream &out, const Fixed &fixe);




#endif