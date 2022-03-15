# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2022/03/10 16:01:58 by ados-rei          #+#    #+#             #
#   Updated: 2022/03/10 16:02:03 by ados-rei         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_print_char.c \
		ft_print_hex.c \
		ft_print_nbr.c \
		ft_print_ptr.c \
		ft_print_str.c \
		ft_print_uns.c \
		ft_putnbr_fd.c

CC = cc
FLAGS = -c -Wall -Werror -Wextra
RM = rm -f

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re: fclean all

.PHONY:	all clean fclean re
