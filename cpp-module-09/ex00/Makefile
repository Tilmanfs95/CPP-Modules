# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 11:25:00 by tilmanfs          #+#    #+#              #
#    Updated: 2023/09/07 12:18:10 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	btc

CPPFLAGS		=	-Wall -Werror -Wextra -std=c++98

SRCS			=	main.cpp \
					BitcoinExchange.cpp \

OBJS			=	$(SRCS:.cpp=.o)

$(NAME):			$(OBJS)
					$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

all:				$(NAME)

clean:
					rm -rf $(OBJS)

fclean:				clean
					rm -f $(NAME)

re:					fclean all
