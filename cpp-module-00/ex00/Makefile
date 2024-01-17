# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/01 19:01:09 by tfriedri          #+#    #+#              #
#    Updated: 2023/01/01 19:11:55 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRCS		=	megaphone.cpp

OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX)  $(CPPFLAGS)  $(OBJS) -o $(NAME)

all:			$(NAME)

clean:			
				@rm -f $(OBJS)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all
