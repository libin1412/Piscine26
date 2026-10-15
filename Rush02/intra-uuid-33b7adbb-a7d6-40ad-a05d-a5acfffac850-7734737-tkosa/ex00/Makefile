# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkosa <tkosa@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/11 18:48:40 by tkosa             #+#    #+#              #
#    Updated: 2026/10/11 18:48:41 by tkosa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= rush-02

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= main.c utils.c alloc.c readfile.c parse.c dict.c find.c print.c words.c number.c

$(NAME): $(SRCS) rush02.h
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
