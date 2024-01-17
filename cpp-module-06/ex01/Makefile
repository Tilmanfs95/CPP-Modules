# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 16:31:55 by tfriedri          #+#    #+#              #
#    Updated: 2023/04/25 18:25:31 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	serialize
CPPFLAGS		=	-Wall -Werror -Wextra -std=c++98

SRCS			=	main.cpp		\
					Serializer.cpp	\

OBJS			=	$(SRCS:.cpp=.o)

$(NAME):			$(OBJS)
					$(CXX)	$(CPPFLAGS)	$(OBJS)	-o	$(NAME)

all:				$(NAME)

clean:
					@rm -f $(OBJS)

fclean:				clean
					@rm -f $(NAME)

re:					fclean all
