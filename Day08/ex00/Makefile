# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 14:08:52 by aribesni          #+#    #+#              #
#    Updated: 2022/05/02 14:08:54 by aribesni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		easyfind

SRC =		main.cpp

SRCS = 		${addprefix ./srcs/, ${SRC}}

OBJ = 		${SRCS:.cpp=.o}

HEADER =	./includes/

CC =		clang++

FLAGS = 	-Wall -Wextra -Werror

%.o : 		%.cpp ./includes/easyfind.hpp
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