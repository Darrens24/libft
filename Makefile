# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleleux <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 17:50:06 by eleleux           #+#    #+#              #
#    Updated: 2022/11/27 11:56:00 by eleleux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_calloc.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_strchr.c \
	  ft_strdup.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putnbr_fd.c \
	  ft_putendl_fd.c \

SRCBONUS = ft_lstnew.c \
		   ft_lstadd_front.c \
		   ft_lstsize.c \
		   ft_lstlast.c \
		   ft_lstadd_back.c \
		   ft_lstdelone.c \
		   ft_lstclear.c \
		   ft_lstiter.c \
		   ft_lstmap.c \

NAME = libft.a

all : $(NAME)

OBJ = $(SRC:.c=.o)

OBJBONUS = $(SRCBONUS:.c=.o)

ifdef MAKEBONUS
	OBJ = $(OBJBONUS)
endif

.c.o :
	$(CC) $(CFLAGS) -I ./ -c $< -o ${<:.c=.o}

$(NAME) : $(OBJ)
	ar rcs $@ $(OBJ)

bonus:
	@make MAKEBONUS=1 all

clean :
	rm -f $(OBJ) $(OBJBONUS)

fclean : clean
	rm -f libft.a

re : fclean all

.PHONY : all clean fclean bonus re
