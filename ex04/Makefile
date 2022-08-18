# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 00:41:55 by qduong            #+#    #+#              #
#    Updated: 2022/08/18 12:20:53 by qduong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := rep

CC := c++

RM := rm -rf

CFLAGS := -Wall -Wextra -Werror -std=c++98 -g

SRCS := main.cpp

OBJS:= $(SRCS:%.cpp=%.o)

TEST:= ./rep Example.cpp Example Car

NL		:= \n
Q		:= "
NC		:= \033[0m
RED 	:= \033[1;31m
GREEN 	:= \033[1;32m
BLUE 	:= \033[1;34m
PURPLE	:= \033[35;1m

all:$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo ${Q}${NL}${GREEN} "Compilation Done" ${NC}${Q}

$(OBJS) : %.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

valgrind:
	valgrind --leak-check=full  --show-leak-kinds=all $(TEST)

leaks :
	leaks --atExit -- $(TEST)

test:
	./rep Example.cpp Example Car

clean:
	$(RM) $(OBJS)
	$(RM) *.dSYM
	$(RM) Example.cpp.replace
	$(RM) Example.hpp.replace

fclean:clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: clean fclean re
