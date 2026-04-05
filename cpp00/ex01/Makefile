# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tafujise <tafujise@student.42.jp>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/04 23:45:03 by tafujise          #+#    #+#              #
#    Updated: 2026/04/06 02:22:05 by tafujise         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= phonebook

CPP:=c++

FLAGS:=-Wall -Wextra -Werror

SRCS:=main.cpp\
	  PhoneBook.cpp\
	  Contact.cpp\

HEADERS:=PhoneBook.hpp\
		 Contact.hpp\

OBJS:=$(SRCS:%.cpp=%.o)

%.o: %.cpp $(HEADERS)
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
