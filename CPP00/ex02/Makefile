# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/15 23:50:50 by ana-cast          #+#    #+#              #
#    Updated: 2024/11/16 00:47:27 by ana-cast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= account

CPP		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

################################################################################
##                              SOURCES AND OBJECTS                           ##
################################################################################

SRC		= Account.cpp tests.cpp
OBJS	= $(SRC:%.cpp=%.o)

################################################################################
##                                    COLORS                                 ##
################################################################################

END			=\033[0m
BOLD		=\033[1m
GREEN		=\033[0;32m
RED			=\033[0;31m
BLUE		=\033[0;34m
YELLOW		=\033[33m
MAGENTA		=\033[35m
TURQUOISE	=\033[36m

################################################################################
##                                     RULES                                  ##
################################################################################

all : head $(NAME)

# https://patorjk.com/software/taag/#p=display&h=0&v=1&c=echo&f=ANSI%20Regular&t=Type%20Something%20
head :
	@echo -e "$(MAGENTA)"
	@echo -e "\t ██████ ██████  ██████         ██████   ██████  "
	@echo -e "\t██      ██   ██ ██   ██       ██  ████ ██  ████ "
	@echo -e "\t██      ██████  ██████  █████ ██ ██ ██ ██ ██ ██ "
	@echo -e "\t██      ██      ██            ████  ██ ████  ██ "
	@echo -e "\t ██████ ██      ██             ██████   ██████  "
	@echo -e "\t$(BOLD)Exercise 02$(END)$(MAGENTA)"
	@echo -e "\t        42MLG: by ana-cast"
	@echo -e "\tProyect: \033[36m $(NAME) $(MAGENTA)"
	@echo -e "\tCommands:\033[36m all clean fclean re bonus $(BLUE)"
	@echo -e "\t🛠   Compiler: $(CPP)"
	@echo -e "\t🛠   Flags: $(FLAGS) $(END)\n"

$(NAME) : line $(OBJS)
	@echo -e "✦ ---------------------- ✦$(END)"
	@$(CPP) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	@$(CPP) $(FLAGS) -c $< -o $@
	@echo -e "$(GREEN)  ✓ Compiled: $(notdir $<)"

line :
	@echo -e "$(GREEN) $(BOLD)"
	@echo -e "  COMPILING $(NAME)...$(END) $(GREEN)"
	@echo -e "✦ ---------------------- ✦"

clean :
	@printf "\n$(YELLOW) 🗑   Removing objects$(END)"
	@$(RM) $(OBJS)
	@echo -e "$(GREEN)\r  ✓  $(RED)Removed  objects from $(NAME) $(END)"

fclean: clean
	@printf "$(YELLOW) 🗑   Removing $(NAME) $(END)"
	@$(RM) $(NAME)
	@echo -e "$(GREEN)\r  ✓  $(RED)Removed  $(NAME) $(END)\n"

re :
	@$(MAKE) -s fclean
	@clear
	@$(MAKE) -s all

.PHONY: all clean fclean re