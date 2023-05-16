# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 10:53:46 by mcatal-d          #+#    #+#              #
#    Updated: 2023/05/16 11:25:08 by mcatal-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    		= Fixed
SRC             = main.cpp Fixed.cpp
OBJ             = $(SRC:.cpp=.o)
CC              = c++
CFLAGS  		= -Wall -Wextra -Werror -std=c++98
RM              = rm -f

all: $(NAME)


$(NAME): $(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re