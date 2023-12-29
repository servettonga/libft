# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 17:25:01 by sehosaf           #+#    #+#              #
#    Updated: 2023/12/29 23:21:37 by sehosaf          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC 		= 	clang
FLAGS 	= 	-Wall -Wextra -Werror
RM		=	rm -f

MAND	=	ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr ft_memcmp \
			ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_toupper ft_tolower \
			ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
			ft_strlen \
			ft_atoi ft_itoa

SRCS	=	$(addsuffix .c, $(MAND))
OBJS	=	$(addsuffix .o, $(MAND))

.c.o:		$(OBJS)
			$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			ar -rcs $(NAME) $(OBJS)
			ranlib $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re
