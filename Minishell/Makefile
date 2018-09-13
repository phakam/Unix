# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mphaka <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/11 13:24:13 by mphaka            #+#    #+#              #
#    Updated: 2017/09/21 10:30:34 by mphaka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

SRC =	sources/minishell.c			\
		sources/get_next_line.c		\
		sources/ft_split.c			\
		sources/sh_env.c			\
		sources/sh_echo.c			\
		sources/sh_exec.c			\
		sources/sh_cd.c				\
		sources/sh_launch.c			\
		sources/sh_get_path.c		\
		sources/sh_clear.c			\
		sources/sh_unsetenv.c		\
		sources/sh_realloc.c		\
		sources/sh_setenv.c			\
		sources/sh_increase_array.c	\
		sources/ft_sstrnew.c		\
		sources/ft_sstrlen.c		\

HEADER = -I include

LFLAGS = -L./libft/ -lft

FLAGS = -o minishell -Wall -Werror -Wextra -g

all: $(NAME)

$(NAME):
	@make -C libft/
	@gcc $(FLAGS) $(SRC) $(HEADER) $(LFLAGS)
	@echo "\033[00;32mMade '$(NAME)'\033[0m"

clean:
	@make -C libft/ clean

fclean: clean
	@rm -rf $(NAME)
	@rm -rf libft/libft.a
	@echo "\033[00;32mRemoved '$(NAME)''$(OBJ)\n'\033[0m"

re: fclean all

val:
	@valgrind --leak-check=full ./minishell
