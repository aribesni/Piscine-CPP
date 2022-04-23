# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 16:57:26 by aribesni          #+#    #+#              #
#    Updated: 2022/04/14 16:57:31 by aribesni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		convert

SRC = 		main.cpp

SRCS = 		${addprefix ./srcs/, ${SRC}}

OBJ = 		${SRCS:.cpp=.o}

CC = 		clang++

FLAGS =		-Wall -Wextra -Werror

HEADER = 	./includes/

%.o : 		%.cpp
			${CC} ${FLAGS} -I ${HEADER} -c $< -o $@

${NAME} : 	${OBJ}
			${CC} ${FLAGS} ${OBJ} -o ${NAME}

all : 		${NAME}

clean :
			rm -f ${OBJ}

fclean : 	clean
			rm -f ${NAME}

re : 		fclean all

.Phony : 	all clean fclean re