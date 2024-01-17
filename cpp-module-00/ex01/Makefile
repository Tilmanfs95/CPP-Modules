# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/01 20:25:13 by tfriedri          #+#    #+#              #
#    Updated: 2023/03/01 10:40:04 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRCS		=	PhoneBook.cpp	\
				Contact.cpp		\
				main.cpp		\

OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX)  $(CPPFLAGS)  $(OBJS) -o $(NAME)

all:			$(NAME)

clean:			
				@rm -f $(OBJS)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all
