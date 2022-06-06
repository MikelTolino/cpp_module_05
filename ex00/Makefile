# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 20:49:39 by mmateo-t          #+#    #+#              #
#    Updated: 2022/06/06 20:29:17 by mmateo-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS:= -Wall -Werror -Wextra
CPPSTD:= -std=c++98
SRCS:= $(wildcard *.cpp)
OBJS:= $(SRCS:%.cpp=%.o)
NAME:= Bureaucrat
RM:= rm -rf
DEBUG:= -g

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(DEBUG) $(CFLAGS) $(CPPSTD) $(OBJS) -o $@

%.o: %.c
	$(CXX) $(CFLAGS) $(CPPSTD) -c $(SRCS) -o $@

clean:
	@echo "Cleaning Objects"
	$(RM) $(OBJS)

fclean: clean
	@echo "Cleaning Objects and $(NAME)"
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re $(NAME)
