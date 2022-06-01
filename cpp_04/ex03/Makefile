# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 18:56:23 by ikgonzal          #+#    #+#              #
#    Updated: 2022/06/01 13:29:02 by ikgonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp AMateria.cpp Ice.cpp Cure.cpp MateriaSource.cpp Character.cpp
OBJS	= $(SRCS:.cpp=.o)

GPP		= clang++
RM		= rm -f
FLAGS=	-Wall -Wextra -Werror -fsanitize=address -g3

NAME	= materia

all:	$(NAME)

$(NAME):$(OBJS)
	$(GPP) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:	all clean fclean re