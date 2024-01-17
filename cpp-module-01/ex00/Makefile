# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 22:26:13 by tfriedri          #+#    #+#              #
#    Updated: 2023/01/11 22:31:28 by tfriedri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	zombies
CPPFLAGS	=	-Wall -Werror -Wextra -std=c++98

SRCS		=	main.cpp		\
				newZombie.cpp	\
				randomChump.cpp	\
				Zombie.cpp		\
				
OBJS		=	$(SRCS:.cpp=.o)

$(NAME):		$(OBJS)
				$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

all:			$(NAME)

clean:
				@rm -f $(OBJS)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all
