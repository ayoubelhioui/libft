# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-hiou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 18:12:25 by ael-hiou          #+#    #+#              #
#    Updated: 2021/11/16 19:05:53 by ael-hiou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm -f
CLIB = ar rc
CFLAGS = -Wextra -Werror -Wall
SRC = ft_memchr.c ft_memcmp.c ft_strjoin.c ft_atoi.c ft_memset.c ft_strtrim.c ft_strnstr.c ft_substr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_strlcpy.c ft_memmove.c ft_split.c ft_strrchr.c ft_memcpy.c ft_strlcat.c ft_strdup.c ft_calloc.c ft_strncmp.c ft_bzero.c ft_strlen.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_strchr.c ft_toupper.c ft_tolower.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isalpha.c
NAME = libft.a
OBJECTFILE = $(SRC:.c=.o)
BONUSC = ft_lstiter_bonus.c ft_lstclear_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstsize_bonus.c ft_lstadd_front_bonus.c ft_lstnew_bonus.c
BONUSO = $(BONUSC:.c=.o)


all : $(NAME)

$(NAME) : $(OBJECTFILE)
	$(CLIB) $(NAME) $(OBJECTFILE)
bonus : $(BONUSO)
	$(CLIB) $(NAME) $(BONUSO)
clean: 
	$(RM) $(OBJECTFILE)
	$(RM) $(BONUSO)
fclean : clean
	$(RM) $(NAME)
re : fclean all bonus
