# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eferrand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/23 22:43:33 by eferrand          #+#    #+#              #
#    Updated: 2017/10/01 05:09:38 by eferrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# our executable name
NAME			:=	Colleen
NAME_TWO		:=	Grace
NAME_THREE		:=	Sully

# base dirs
SRC_DIR			:=	./
OBJ_DIR			:=	./objs

# files to compile
FILE_LIST		:=	Colleen.c
FILE_LIST_TWO	:=	Grace.c
FILE_LIST_THREE	:=	Sully.c

OBJ_FILES		:= $(addprefix $(OBJ_DIR)/,$(FILE_LIST:.c=.o))
OBJ_FILES_TWO	:= $(addprefix $(OBJ_DIR)/,$(FILE_LIST_TWO:.c=.o))
OBJ_FILES_THREE	:= $(addprefix $(OBJ_DIR)/,$(FILE_LIST_THREE:.c=.o))

# compiler and flags
CC				:=	gcc
CFLAGS			:=	-Wall -Werror -Wextra -fsanitize=address -O0

all: obj $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

# linking rule: executable NAME needs OBJ_FILES to link
$(NAME): $(OBJ_FILES) $(OBJ_FILES_TWO) $(OBJ_FILES_THREE)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(NAME)
	$(CC) $(CFLAGS) $(OBJ_FILES_TWO) -o $(NAME_TWO)
	$(CC) $(CFLAGS) $(OBJ_FILES_THREE) -o $(NAME_THREE)

# compiler rule: each .o file in OBJ_DIR needs a .c file in SRC_DIR
# $< -- input file (.c)
# $@ -- output file (.o)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_TWO)
	rm -f $(NAME_THREE)

relibs:
	@make re --no-print-directory

re: fclean all

.PHONY: all obj clean fclean relibs re
