# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 23:47:30 by tfriedri          #+#    #+#              #
#    Updated: 2023/01/11 23:58:37 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	program
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRCS		=	main.cpp
				
OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

all:			$(NAME)

clean:
				@rm -f $(OBJS)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all