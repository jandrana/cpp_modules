NAME    = main

CPP     = c++
FLAGS   = -Wall -Wextra -Werror -std=c++98
RM      = rm -rf

################################################################################
##                              SOURCES AND OBJECTS                           ##
################################################################################

SRC		= Brain.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp main.cpp 
SRCDIR	= ./src/
OBJDIR	= ./obj/
OBJS	= $(SRC:%.cpp=$(OBJDIR)%.o)
INCDIR	= ./include/
CFLAGS	= -I$(INCDIR)

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

all: head $(NAME)

head :
	@echo -e "$(MAGENTA)"
	@echo -e "	 ██████ ██████  ██████         ██████  ██   ██ "
	@echo -e "	██      ██   ██ ██   ██       ██  ████ ██   ██ "
	@echo -e "	██      ██████  ██████  █████ ██ ██ ██ ███████ "
	@echo -e "	██      ██      ██            ████  ██      ██ "
	@echo -e "	 ██████ ██      ██             ██████       ██ "
	@echo -e "\t$(BOLD)Exercise 02$(END)$(MAGENTA)"
	@echo -e "\t        42MLG: by ana-cast"
	@echo -e "\tProyect: \033[36m $(NAME) $(MAGENTA)"
	@echo -e "\tCommands:\033[36m all clean fclean re $(BLUE)"
	@echo -e "\t🛠   Compiler: $(CPP)"
	@echo -e "\t🛠   Flags: $(FLAGS) $(END)\n"

$(NAME) : $(OBJS)
	@$(CPP) $(FLAGS) -o $(NAME) $(OBJS)
	@echo -e "\n    $(GREEN)$(BOLD)COMPILED $(NAME)$(END) $(GREEN)\n"

$(OBJDIR)%.o: $(SRCDIR)%.cpp
	@mkdir -p $(OBJDIR)
	@$(CPP) $(FLAGS) $(CFLAGS) -c $< -o $@
	@echo -e "$(GREEN)  ✓ Compiled: $(notdir $<)"

clean :
	@echo -e "\n$(YELLOW) 🗑   Removing objects$(END)"
	@$(RM) $(OBJDIR)
	@echo -e "$(GREEN)\r  ✓  $(RED)Removed  objects from $(NAME) $(END)\n"

fclean : clean
	@echo -e "$(YELLOW) 🗑   Removing $(NAME) $(END)"
	@$(RM) $(NAME)
	@echo -e "$(GREEN)\r  ✓  $(RED)Removed  $(NAME) $(END)\n"

re : fclean all

.PHONY: all clean fclean re
