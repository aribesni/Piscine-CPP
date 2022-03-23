# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 14:53:10 by aribesni          #+#    #+#              #
#    Updated: 2022/03/22 14:53:11 by aribesni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		sorcerer

SRC = 		Peon.cpp Sorcerer.cpp Victim.cpp main.cpp

SRCS = 		${addprefix ./srcs/, ${SRC}}

OBJ = 		${SRCS:.cpp=.o}

CC = 		clang++

FLAGS = 	-Wall -Wextra -Werror

HEADER = 	./includes/

%.o : 		%.cpp ./includes/Peon.hpp ./includes/Sorcerer.hpp ./includes/Victim.hpp
			${CC} ${FLAGS} -I ${HEADER} -c $< -o $@

all : 		${NAME}

${NAME} : 	${OBJ}
			${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean :
			rm -f ${OBJ}

fclean :	clean
			rm -f ${NAME}

re :		fclean all

.Phony :	all clean fclean re