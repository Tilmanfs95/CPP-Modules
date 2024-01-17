# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 01:09:32 by tfriedri          #+#    #+#              #
#    Updated: 2023/01/05 03:20:50 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	program
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRCS		=	tests.cpp	\
				Account.cpp	\

OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

all:			$(NAME)

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean all
