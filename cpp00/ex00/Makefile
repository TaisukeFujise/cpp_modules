# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tafujise <tafujise@student.42.jp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/04 23:45:03 by tafujise          #+#    #+#              #
#    Updated: 2026/04/05 00:00:11 by tafujise         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:=megaphone

CPP:=c++

FLAGS:=-Wall -Wextra -Werror

SRCS:=megaphone.cpp

OBJS:=$(SRCS:%.cpp=%.o)

%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CPP) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
