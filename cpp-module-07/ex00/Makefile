# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 21:12:04 by tfriedri          #+#    #+#              #
#    Updated: 2023/05/03 21:17:04 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	whatever

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
