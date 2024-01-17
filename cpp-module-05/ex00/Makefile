# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 21:08:54 by tfriedri          #+#    #+#              #
#    Updated: 2023/01/31 21:23:49 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Bureaucrat
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRCS		=	main.cpp		\
				Bureaucrat.cpp	\

OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX)  $(CPPFLAGS)  $(OBJS) -o $(NAME)

all:			$(NAME)

clean:			
				@rm -f $(OBJS)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all
