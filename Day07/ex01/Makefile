# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 17:48:07 by aribesni          #+#    #+#              #
#    Updated: 2022/04/26 17:48:08 by aribesni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		iter

SRC = 		main.cpp

SRCS =		${addprefix ./srcs/, ${SRC}}

OBJ = 		${SRCS:.cpp=.o}

HEADER =	./includes/

CC = 		clang++

FLAGS = 	-Wall -Wextra -Werror

%.o : 		%.cpp ./includes/iter.hpp
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