# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 21:10:45 by tfriedri          #+#    #+#              #
#    Updated: 2023/02/22 22:09:15 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	realType
CPPFLAGS		=	-Wall -Werror -Wextra -std=c++98

SRCS			=	main.cpp		\
					Base.cpp		\

OBJS			=	$(SRCS:.cpp=.o)

$(NAME):			$(OBJS)
					$(CXX)	$(CPPFLAGS)	$(OBJS)	-o	$(NAME)

all:				$(NAME)

clean:
					@rm -f $(OBJS)

fclean:				clean
					@rm -f $(NAME)

re:					fclean all
