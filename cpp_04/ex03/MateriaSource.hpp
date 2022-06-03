/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:20:02 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/06/03 12:38:31 by ikgonzal         ###   ########.fr       */
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

        AMateria* _learnedMateria[4];

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