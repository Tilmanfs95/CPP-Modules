# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 22:54:27 by tfriedri          #+#    #+#              #
#    Updated: 2023/04/04 17:57:03 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	FragTrap
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRCS		=	main.cpp			\
				ClapTrap.cpp		\
				FragTrap.cpp		\
				ScavTrap.cpp		\

OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX)  $(CPPFLAGS)  $(OBJS) -o $(NAME)

all:			$(NAME)

clean:			
				@rm -f $(OBJS)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all
