# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 17:07:47 by bhung-yi          #+#    #+#              #
#    Updated: 2023/02/08 19:05:37 by bhung-yi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

RM		= /bin/rm -f

NAME	= libftprintf.a

# INCLUDE	= ft_printf.h

SRCS	= 	ft_printf.c \
			ft_print_misc.c \
			ft_print_ptr.c \
			ft_print_unsigned.c \
			ft_print_hex.c

OBJS	= ${SRCS:.c=.o}

$(NAME):
	$(CC) $(FLAGS) -c $(SRCS) -I ./
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

norm:
	norminette $(SRCS)




# #Variables

# NAME		= libftprintf.a
# INCLUDE		= include
# LIBFT		= libft
# SRC_DIR		= src/
# OBJ_DIR		= obj/
# CC			= gcc
# CFLAGS		= -Wall -Werror -Wextra -I
# RM			= rm -f
# AR			= ar rcs

# #Sources

# SRC_FILES	=	ft_printf ft_print_misc ft_print_ptr ft_print_unsigned ft_print_hex


# SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
# OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

# ###

# OBJF		=	.cache_exists

# all:		$(NAME)

# $(NAME):	$(OBJ)
# 			@make -C $(LIBFT)
# 			@cp libft/libft.a .
# 			@mv libft.a $(NAME)
# 			@$(AR) $(NAME) $(OBJ)
# 			@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)"

# $(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
# 			@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
# 			@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# $(OBJF):
# 			@mkdir -p $(OBJ_DIR)

# clean:
# 			@$(RM) -rf $(OBJ_DIR)
# 			@make clean -C $(LIBFT)
# 			@echo "$(BLUE)ft_printf object files cleaned!$(DEF_COLOR)"

# fclean:		clean
# 			@$(RM) -f $(NAME)
# 			@$(RM) -f $(LIBFT)/libft.a

# re:			fclean all

# norm:
# 			@norminette $(SRC) $(INCLUDE) $(LIBFT) | grep -v Norme -B1 || true

# .PHONY:		all clean fclean re norm
