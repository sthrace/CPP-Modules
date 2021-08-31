NAME	= Unnecessary_violence
SRCS	= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HEADER  = Weapon.hpp HumanA.hpp HumanB.hpp
OBJS	= $(SRCS:.cpp=.o)
CC		= clang++
FLAGS	= -Wall -Werror -Wextra -std=c++98

all:	$(NAME)

$(NAME):	$(HEADER) $(OBJS)
			@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.c
			$(CC) -c $(FLAGS) -o $@ $<

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

git:		fclean
			git add Makefile
			git add *.?pp
			git commit -m "commit"
			git push