# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 18:56:23 by ikgonzal          #+#    #+#              #
#    Updated: 2022/05/25 10:57:17 by ikgonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS	= $(SRCS:.cpp=.o)

GPP		= clang++
RM		= rm -f
FLAGS=	-Wall -Wextra -Werror -fsanitize=address -g3

NAME	= brain

all:	$(NAME)

$(NAME):$(OBJS)
	$(GPP) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:	all clean fclean re