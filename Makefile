# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sehosaf <sehosaf@student.42warsaw.pl>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 17:25:01 by sehosaf           #+#    #+#              #
#    Updated: 2023/12/31 20:40:41 by sehosaf          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CC 		= 	clang
FLAGS 	= 	-Wall -Wextra -Werror -Iincludes
RM		=	rm -f
AR		=	ar -rcs

MAND	=	ft_calloc ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr ft_memcmp \
			ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_toupper ft_tolower \
			ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
			ft_strlen ft_strlcpy ft_strlcat ft_strchr ft_strrchr ft_strnstr ft_strncmp ft_strdup \
			ft_substr ft_strjoin ft_strtrim ft_split ft_strmapi ft_striteri \
			ft_atoi ft_itoa

BONUS	=	ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone \
			ft_lstclear ft_lstiter ft_lstmap

SRCS	=	$(addprefix srcs/, $(addsuffix .c, $(MAND)))
OBJS	=	$(SRCS:.c=.o)
BONUS_S =	$(addprefix srcs/, $(addsuffix .c, $(BONUS)))
BONUS_O =	$(BONUS_S:.c=.o)

.c.o:
			@$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			@$(AR) $(NAME) $(OBJS)
			@ranlib $(NAME)

all:		$(NAME)

bonus:		$(OBJS) $(BONUS_O)
			@$(AR) $(NAME) $(OBJS) $(BONUS_O)
			@ranlib $(NAME)

clean:
			@$(RM) *.o

fclean: 	clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY: 	all bonus clean fclean re
