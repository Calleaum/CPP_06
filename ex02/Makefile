# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/07 08:37:36 by calleaum          #+#    #+#              #
#    Updated: 2025/09/29 13:57:41 by calleaum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = Base

CXX     = c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98 -Iinclude

SRC     = src/Base.cpp src/main.cpp
OBJ     = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32mBuild complete: $(NAME)\033[0m"

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@echo "\033[1;32mCleaned object files.\033[0m"

fclean: clean
	rm -f $(NAME)
	@echo "\033[1;32mRemoved executable.\033[0m"

re: fclean all

.PHONY: all clean fclean re
