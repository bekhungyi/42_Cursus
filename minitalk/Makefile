# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 13:45:15 by bhung-yi          #+#    #+#              #
#    Updated: 2023/04/25 19:10:02 by bhung-yi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
FLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

src		= ft_utils.c
obj_c	= $(src:.c=.o)
server	= server
client	= client

all:	$(server) $(client)

$(server):	$(obj_c) minitalk.h
			$(CC) $(FLAGS) server.c $(obj_c) -o $(server)

$(client):	$(obj_c) minitalk.h
			$(CC) $(FLAGS) client.c $(obj_c) -o $(client)

%.o:%.c
		$(CC) $(FLAGS) -c $< -o $@

clean:
		rm -rf $(obj_c)

fclean:	clean
		$(RM) server client

re:	fclean all

norm: 
		norminette minitalk.h *.c