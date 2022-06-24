# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikgonzal <ikgonzal@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 18:56:23 by ikgonzal          #+#    #+#              #
#    Updated: 2022/06/24 10:15:51 by ikgonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp span.cpp
OBJS	= $(SRCS:.cpp=.o)

GPP		= clang++
RM		= rm -f
FLAGS=	-Wall -Wextra -Werror
VERSION = -std=c++98 -pedantic

NAME	= span

all:	$(NAME)

$(NAME): $(OBJS)
	$(GPP) $(FLAGS) $(VERSION) -o $(NAME) $(OBJS)

%.o : %.cpp
		$(GPP) $(FLAGS) $(VERSION) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:		fclean $(NAME) 

.PHONY:	all clean fclean re