/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:10:44 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/13 13:23:49 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen {
	
	private:
	
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
	
		Karen(void);
		~Karen(void);
		void complain( std::string level );
};



#endif