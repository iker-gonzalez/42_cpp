/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:20:02 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/01 11:38:44 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    private:

        AMateria* _learnedMateria[3];

    
    public:

        MateriaSource(void);
        MateriaSource(MateriaSource const &obj);
        
        ~MateriaSource(void);

        MateriaSource &operator=(MateriaSource const &obj);

		std::string const &getName() const;
        
        virtual void learnMateria(AMateria *m);
        virtual AMateria* createMateria(std::string const &type);
};

#endif