# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikgonzal <ikgonzal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 18:56:23 by ikgonzal          #+#    #+#              #
#    Updated: 2022/05/17 11:05:25 by ikgonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp
OBJS	= $(SRCS:.cpp=.o)

GPP		= clang++
RM		= rm -f
FLAGS= -Wall -Wextra -Werror

NAME	= replace

all:	$(NAME)

$(NAME):$(OBJS)
	$(GPP) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) sedREPLACE

re:		fclean $(NAME)

.PHONY:	all clean fclean re