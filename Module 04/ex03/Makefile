NAME	= Materia
SRCS	= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
HEADER	= header.hpp AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
OBJ_F	= ./objs/
OBJ		= $(SRCS:.cpp=.o)
OBJS	= $(addprefix $(OBJ_F), $(OBJ))
CC		= clang++
FLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf

$(OBJ_F)%.o: %.cpp
			@mkdir -p $(OBJ_F)
			$(CC) -c $(FLAGS) -o $@ $<

all:	$(NAME)

$(NAME):	$(HEADER) $(OBJS)
			@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
			@$(RM) $(OBJ_F)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

git:		fclean
			git add Makefile
			git add *.?pp
			git commit -m "commit"
			git push

leaks: 		all
			@leaks --atExit -- ./$(NAME)