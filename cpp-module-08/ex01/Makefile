# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 14:20:24 by tfriedri          #+#    #+#              #
#    Updated: 2023/09/04 14:27:00 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	span

CPPFLAGS		=	-Wall -Werror -Wextra -std=c++98

SRCS			=	main.cpp \
					Span.cpp

OBJS			=	$(SRCS:.cpp=.o)

$(NAME):			$(OBJS)
					$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

all:				$(NAME)

clean:
					rm -rf $(OBJS)

fclean:				clean
					rm -f $(NAME)

re:					fclean all