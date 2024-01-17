# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 12:29:21 by tfriedri          #+#    #+#              #
#    Updated: 2023/09/11 12:29:34 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	RPN

CPPFLAGS		=	-Wall -Werror -Wextra -std=c++98

SRCS			=	main.cpp \
					RPN.cpp \

OBJS			=	$(SRCS:.cpp=.o)

$(NAME):			$(OBJS)
					$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

all:				$(NAME)

clean:
					rm -rf $(OBJS)

fclean:				clean
					rm -f $(NAME)

re:					fclean all
