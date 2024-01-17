# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 14:35:30 by tfriedri          #+#    #+#              #
#    Updated: 2023/04/18 12:13:30 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Interface
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRCS		=	AMateria.cpp		\
				Character.cpp		\
				Ice.cpp				\
				Cure.cpp			\
				MateriaSource.cpp 	\
				main.cpp			\

OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX)  $(CPPFLAGS)  $(OBJS) -o $(NAME)

all:			$(NAME)

clean:			
				@rm -f $(OBJS)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all
