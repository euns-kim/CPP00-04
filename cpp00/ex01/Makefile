# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 17:30:12 by eunskim           #+#    #+#              #
#    Updated: 2023/06/27 17:34:11 by eunskim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = \
PhoneBook.hpp \
Contact.hpp
SRCS = \
PhoneBook.cpp \
Contact.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@c++ $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@c++ $(CFLAGS) -c $< -o $@ 

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re