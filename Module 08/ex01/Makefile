NAME	= span
SRCS	= main.cpp span.cpp
HEADER	= span.hpp
OBJ_F	= ./objs/
OBJ		= $(SRCS:.cpp=.o)
OBJS	= $(addprefix $(OBJ_F), $(OBJ))
CC		= clang++
FLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf

all:	$(NAME)

$(NAME):	$(HEADER) $(OBJS)
			@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJ_F)%.o: %.cpp $(HEADER)
			@mkdir -p $(OBJ_F)
			@printf  "%s\033[34m[$<]\033[0m\n" "Compiling: "
			@$(CC) -c $(FLAGS) -o $@ $<
			@printf "\033[A\033[2K"

clean:
			@$(RM) $(OBJ_F)
			@printf  "%s\033[32m[✔]\033[0m\n" "$@: "

fclean:		clean
			@$(RM) $(NAME)
			@printf  "%s\033[32m[✔]\033[0m\n" "$@: "

re:			fclean all

git:		fclean
			git add Makefile
			git add *.?pp
			git commit -m "commit"
			git push

leaks: 		all
			@leaks --atExit -- ./$(NAME)