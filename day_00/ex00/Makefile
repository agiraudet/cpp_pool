# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agiraude <agiraude@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/06 15:43:27 by agiraude          #+#    #+#              #
#    Updated: 2022/09/16 23:12:21 by agiraude         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	megaphone

BUILD_DIR	:=	./build

SRCS_DIR	:=	./srcs

SRCS		:=	megaphone.cpp

OBJS		:=	$(SRCS:%.cpp=$(BUILD_DIR)/%.o)


CFLAGS		:=	-Wall -Wextra -Werror -std=c++98

CC			:= c++

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%.o: $(SRCS_DIR)/%.cpp | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
