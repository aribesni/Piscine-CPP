# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 11:56:39 by aribesni          #+#    #+#              #
#    Updated: 2022/03/03 10:13:14 by aribesni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		fixed

SRC = 		Fixed.cpp main.cpp

SRCS = 		${addprefix ./srcs/, ${SRC}}

OBJ = 		${SRCS:.cpp=.o}

CC = 		clang++

HEADER = 	./includes/

FLAGS = 	-Wall -Wextra -Werror

%.o : 		%.cpp ./includes/Fixed.hpp
			${CC} ${FLAG} -I ${HEADER} -c $< -o $@

all : 		${NAME}

${NAME} : 	${OBJ}
			${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean :
			rm -f ${OBJ}

fclean : 	clean
			rm -f ${NAME}

re : 		fclean
			all

.PHONY : 	all clean fclean re
