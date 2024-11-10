# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: teando <teando@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 22:30:01 by teando            #+#    #+#              #
#    Updated: 2024/11/10 10:44:29 by teando           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -fPIC
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a
ROOT_DIR	:= .
OUT_DIR		:= $(ROOT_DIR)/out
INCS_DIR	:= $(ROOT_DIR)/inc
INCLUDES = -I./inc -I$(LIBFT_PATH)

SRCS	:= \
		$(addprefix $(ROOT_DIR)/, \
			$(addprefix src/, \
				ft_dprintf.c \
				ft_printf.c \
				type_putbase.c \
				type_putchar.c \
				type_putptr.c \
				type_putstr.c \
			) \
		)
OBJS	:= $(addprefix $(OUT_DIR)/, $(notdir $(SRCS:.c=.o)))

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C $(LIBFT_PATH)

$(NAME): $(OBJS)
	cp $(LIBFT) $(ROOT_DIR)/$(NAME)
	ar rcs $(NAME) $(OBJS)

$(OUT_DIR)/%.o: $(ROOT_DIR)/src/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(IDFLAGS) -c $< -o $@ $(INCLUDES)

clean:
	rm -rf $(OBJS) $(OUT_DIR)
	make -C $(LIBFT_PATH) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(LIBFT_PATH) fclean

norm: $(INCS_DIR) $(SRCS)
	@norminette $^

re: fclean all

.PHONY: all clean fclean re norm