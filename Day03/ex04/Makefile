# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 15:38:12 by aribesni          #+#    #+#              #
#    Updated: 2022/03/09 15:38:12 by aribesni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		supertrap

SRC = 		ClapTrap.cpp FragTrap.cpp NinjaTrap.cpp ScavTrap.cpp SuperTrap.cpp main.cpp

SRCS = 		${addprefix ./srcs/, ${SRC}} 

OBJ = 		${SRCS:.cpp=.o}

CC = 		clang++

FLAGS = 	-Wall -Wextra -Werror

HEADER = 	./includes/

%.o : 		%.cpp ./includes/FragTrap.hpp ./includes/ScavTrap.hpp ./includes/ClapTrap.hpp ./includes/NinjaTrap.hpp ./includes/SuperTrap.hpp
			${CC} ${FLAGS} -I ${HEADER} -c $< -o $@

all : 		${NAME}

${NAME} : 	${OBJ}
			${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean :
			rm -f ${OBJ}

fclean : 	clean
			rm -f ${NAME}

re : 		fclean all

.PHONY :	all clean fclean re 