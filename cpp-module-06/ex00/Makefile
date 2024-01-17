# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 14:05:59 by tfriedri          #+#    #+#              #
#    Updated: 2023/05/02 18:20:07 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	convert
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRCS		=	main.cpp		\
				ScalarConverter.cpp		\

OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX)  $(CPPFLAGS)  $(OBJS) -o $(NAME)

all:			$(NAME)

clean:			
				@rm -f $(OBJS)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all
