# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 12:25:56 by tfriedri          #+#    #+#              #
#    Updated: 2023/09/04 12:26:03 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	easyfind

CPPFLAGS		=	-Wall -Werror -Wextra -std=c++98

SRCS			=	main.cpp

OBJS			=	$(SRCS:.cpp=.o)

$(NAME):			$(OBJS)
					$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

all:				$(NAME)

clean:
					rm -rf $(OBJS)

fclean:				clean
					rm -f $(NAME)

re:					fclean all
