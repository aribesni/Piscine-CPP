# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 16:57:18 by aribesni          #+#    #+#              #
#    Updated: 2022/05/04 16:57:19 by aribesni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		mutantstack

SRC = 		mutantstack.cpp main.cpp

SRCS = 		${addprefix ./srcs/, ${SRC}}

OBJ = 		${SRCS:.cpp=.o}

HEADER = 	./includes/

CC = 		clang++

FLAGS = 	-Wall -Wextra -Werror

%.o : 		%.cpp ./includes/mutantstack.hpp
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