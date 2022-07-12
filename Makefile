# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 17:14:24 by bde-carv          #+#    #+#              #
#    Updated: 2022/07/10 16:49:16 by bde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = inc/
LIBFT_DIR = libft/
LIBFT_EXEC = libft.a

SRC =	$(SRC_DIR)push_swap.c \
		$(SRC_DIR)check_input.c \
		$(SRC_DIR)convert_and_order.c \
		$(SRC_DIR)quick_sort.c \
		$(SRC_DIR)quick_utils.c \
		$(SRC_DIR)r_commands.c \
		$(SRC_DIR)rr_commands.c \
		$(SRC_DIR)s_p_commands.c \

# takes the src files and converts them into .o files and puts them into /obj
# % means "take all" (=wildcard)
OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

# compiling flags
# -g gives debugging information when using vaglgrind
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -I $(INC_DIR)

# makefile starts here
all: $(NAME)

# create obj directory ($@ represents name of target)
$(OBJ_DIR):
			@mkdir $@
			
# before OBJ can be executed an /obj directory has to be created	
$(OBJ): | $(OBJ_DIR)

# compiles .c files into .o files and puts them into /obj directory ($< represents first prerequisite required) 
$(OBJ): $(OBJ_DIR)%.o: $(SRC_DIR)%.c
		$(CC) $(CFLAGS) -c $< -o $@
		
# compiles the object files and creates the executable
$(NAME):	$(OBJ)
			$(MAKE) bonus -C libft
			$(CC) $(CFLAGS) $(LIBFT_DIR)$(LIBFT_EXEC) $^ -o $@
			
# remove all object files and also clean libft
clean:
		$(MAKE) fclean -C libft
		rm -f $(OBJ)
		rmdir $(OBJ_DIR)

# same as clean but also removes the executable
fclean: clean
	$(MAKE) fclean -C libft
		rm -f $(NAME)

# make the whole compilation from scratch
re: fclean all

# prevents rules and files with potentially same names being mixed up
.PHONY = all clean fclean re