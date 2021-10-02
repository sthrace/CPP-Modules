NAME	= ClapTrap
SRCS	= ClapTrap.cpp main.cpp
HEADER	= ClapTrap.hpp
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