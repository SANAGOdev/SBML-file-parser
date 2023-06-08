##
## EPITECH PROJECT, 2022
## SBML-file-parser
## File description:
## Makefile
##

CFLAGS = -Wall -Wextra -Iinclude

SRC	= 	src/main.c \
		requirement.c \

OBJ = $(SRC:.c=.o)

NAME = SBMLparser

$(NAME): $(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)
	@echo -e "\033[32m[OK]\033[0m": $(NAME)

all: $(NAME)

clean:
	@rm -f $(OBJ)
	@rm -f coding-style-reports.log
	@rm -f *.gcno *.gcda *.gcov vgcore.*
	@echo -e "\033[31m[RM]\033[0m": $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@echo -e "\033[31m[RM]\033[0m": $(NAME)

re: fclean all

.PHONY: all clean fclean re
