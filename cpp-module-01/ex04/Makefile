# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 19:44:55 by tfriedri          #+#    #+#              #
#    Updated: 2023/03/02 14:02:10 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	sed

CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRCS		=	sed.cpp

T_SRCS		=	main.cpp

OBJS		=	$(SRCS:.cpp=.o)

T_OBJS		=	$(T_SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX)  $(CPPFLAGS)  $(OBJS) -o $(NAME)

test:			$(T_OBJS)
				$(CXX)	$(CPPFLAGS)	$(T_OBJS) -o test

all:			$(NAME)

clean:			
				@rm -f $(OBJS) $(T_OBJS)

fclean:			clean
				@rm -f $(NAME) test

re:				fclean all
