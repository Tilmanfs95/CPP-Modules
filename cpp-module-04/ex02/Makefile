# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/29 22:53:20 by tfriedri          #+#    #+#              #
#    Updated: 2023/01/30 23:05:44 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Abstract
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRCS		=	main.cpp		\
				AAnimal.cpp		\
				Dog.cpp			\
				Cat.cpp			\
				WrongAnimal.cpp	\
				WrongCat.cpp	\
				Brain.cpp		\

OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX)  $(CPPFLAGS)  $(OBJS) -o $(NAME)

all:			$(NAME)

clean:			
				@rm -f $(OBJS)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all
