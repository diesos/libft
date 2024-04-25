# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 23:35:47 by omeoztur          #+#    #+#              #
#    Updated: 2024/04/25 23:35:52 by omeoztur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =    libft.a
CC =    gcc
CFLAGS =    -Wall -Werror -Wextra

SRC =    ft_atoi.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c\
		ft_memcmp.c \
		ft_calloc.c\
		ft_strdup.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_split.c\

SRC.BONUS =    ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstadd_back.c\
			ft_lstdelone.c\
			ft_lstclear.c\
			ft_lstiter.c\
			ft_lstmap.c\
			ft_lstlast.c\

OBJ =    $(SRC:.c=.o)

OBJ.BONUS = $(SRC.BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "🔥\033[0;31mCOMPILATION \033[1;34mSUCCESSFUL✅\033[0m🔥"



%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ) $(OBJ.BONUS)
	@echo "✅✅✅\033[1;34mClean !\033[0m✅✅✅"

fclean:    clean
	@rm -rf $(NAME)
	@echo "✅✅✅\033[1;34mDeep CLEAN \033[0;31mREALLY\033[1;34m clean\033[0m✅✅✅"

re: fclean all

bonus: $(OBJ.BONUS)
	@ar rc $(NAME) $(OBJ.BONUS)

.PHONY: clean fclean re all bonus
