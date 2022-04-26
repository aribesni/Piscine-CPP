# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 15:30:07 by aribesni          #+#    #+#              #
#    Updated: 2022/04/26 15:30:08 by aribesni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		whatever

SRC = 		main.cpp

SRCS = 		${addprefix ./srcs/, ${SRC}}

OBJ = 		${SRCS:.cpp=.o}

CC = 		clang++

FLAGS = 	-Wall -Wextra -Werror

HEADER = 	./includes

%.o : 		%.cpp ./includes/whatever.hpp
			${CC} ${FLAGS} -I ${HEADER} -c $< -o $@

${NAME} :	${OBJ}
			${CC} ${FLAGS} ${OBJ} -o ${NAME}

all : 		${NAME}

clean :
			rm -f ${OBJ}

fclean : 	clean
			rm -f ${NAME}
		
re : 		fclean all

.Phony : 	all clean fclean re