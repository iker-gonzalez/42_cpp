/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:07:28 by ikgonzal          #+#    #+#             */
/*   Updated: 2022/05/26 10:13:08 by ikgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {

    private:
        std::string ideas[100];

    public:

        Brain(void);
        Brain(Brain const &obj);
        ~Brain(void);

        //Brain &operator=(Brain const &obj);

        std::string getIdeas(int nb);
        void setIdeas(std::string idea, int nb);
};

#endif