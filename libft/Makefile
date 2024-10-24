# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 18:39:33 by bouhammo          #+#    #+#              #
#    Updated: 2024/01/06 22:47:27 by bouhammo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CFILES =  ft_calloc.c ft_atoi.c ft_strdup.c ft_strncmp.c ft_strnstr.c ft_memchr.c ft_substr.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcmp.c ft_memcpy.c  ft_memset.c ft_strchr.c ft_strlcpy.c ft_strlen.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strjoin.c  ft_itoa.c ft_memmove.c ft_memcmp.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_split.c ft_strlcat.c

bonus = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c
Objects = $(CFILES:.c=.o)
OBONUS = $(bonus:.c=.o)
all: $(NAME)

bonus:$(OBONUS)
	ar rcs $(NAME) $(OBONUS)

$(NAME): $(Objects)
	ar rcs $(NAME) $(Objects)
clean:
	rm -f $(Objects) $(OBONUS)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)


