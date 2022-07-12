# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 15:40:59 by bde-carv          #+#    #+#              #
#    Updated: 2022/06/24 18:56:38 by bde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c \
      ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strnstr.c \
	  ft_atoi.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \

BONUS = ft_lstsize.c \
		ft_lstmap.c \
		ft_lstiter.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstadd_back.c \
		ft_lstlast.c \
		ft_lstadd_front.c \
		ft_lstnew.c \
	  
OBJS = $(SRC:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

CC		= gcc
RM 		= rm -f
CFLAGS	= -Wall -Wextra -Werror -I.

all:  $(NAME)

$(NAME):	$(OBJS) $(BONUS_OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean:     clean
	$(RM) $(NAME)

bonus:	$(OBJS) $(BONUS_OBJS)
		ar  rcs $(NAME) $(OBJS) $(BONUS_OBJS)

re:   fclean $(NAME)

.PHONY: all clean fclean re bonus
