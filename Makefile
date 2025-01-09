# Directories
SRC_DIR		=	src
OBJ_DIR		=	obj

# Files
NAME		=	libft.a

# Compiler and flags
CC 			= 	cc
CFLAGS 		= 	-Wall -Wextra -Werror -I.
RM			=	rm -rf
AR			=	ar -rcs

# Source files
MAND_FILES	=	ft_calloc ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr ft_memcmp \
				ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_toupper ft_tolower \
				ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
				ft_strlen ft_strlcpy ft_strlcat ft_strchr ft_strrchr ft_strnstr ft_strncmp ft_strdup \
				ft_substr ft_strjoin ft_strtrim ft_split ft_strmapi ft_striteri \
				ft_atoi ft_itoa

BONUS_FILES	=	ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone \
				ft_lstclear ft_lstiter ft_lstmap

# Source and object files with paths
SRCS		=	$(addprefix $(SRC_DIR)/, $(addsuffix .c, $(MAND_FILES)))
OBJS		=	$(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(MAND_FILES)))
BONUS_SRCS	=	$(addprefix $(SRC_DIR)/, $(addsuffix .c, $(BONUS_FILES)))
BONUS_OBJS	=	$(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(BONUS_FILES)))

# Rules
all:		$(NAME)

$(NAME):	$(OBJ_DIR) $(OBJS)
			$(AR) $(NAME) $(OBJS)

$(OBJ_DIR):
			mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ_DIR)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all

bonus:		$(OBJ_DIR) $(OBJS) $(BONUS_OBJS)
			$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: 	all clean fclean re bonus
