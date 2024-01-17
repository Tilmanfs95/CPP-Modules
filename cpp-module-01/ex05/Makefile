# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 21:19:17 by tfriedri          #+#    #+#              #
#    Updated: 2023/01/14 21:20:31 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	harl
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRCS		=	main.cpp		\
				Harl.cpp		\

OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX)  $(CPPFLAGS)  $(OBJS) -o $(NAME)

all:			$(NAME)

clean:			
				@rm -f $(OBJS)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all
