# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhtorres <jhtorres@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 13:10:34 by jhtorres          #+#    #+#              #
#    Updated: 2024/02/16 22:07:02 by jhtorres         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
HEADERS_DIR = .
CFLAGS = -Wall -Wextra -Werror -I $(HEADERS_DIR)
RM = -f

SRCS =  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
  ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
  ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 
  
OBJS = $(SRCS:.c=.o)

BONUS_SRCS =  ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
    ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c  \
    ft_lstiter_bonus.c ft_lstmap_bonus.c \
	
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) 
	ar rcs $(NAME) $(OBJS)
  
bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)
  
clean:
	rm -f $(OBJS) $(BONUS_OBJS)
  
fclean: clean 
	rm -f $(NAME)

re:	fclean $(NAME) bonus

.PHONY: all clean fclean re bonus
