# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/28 12:01:01 by aribesni          #+#    #+#              #
#    Updated: 2022/01/28 12:01:02 by aribesni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		replace

SRC = 		main.cpp

SRCS = 		$(addprefix ./srcs/, $(SRC))

CC = 		clang++

FLAGS = 	-Wall -Wextra -Werror

OBJ = 		${SRCS:.cpp=.o}

all : 		${NAME}

${NAME} : 	${OBJ}
			${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean : 
			rm -f ${OBJ}

fclean : 	clean
			rm -f ${NAME}

re : 		fclean all

.PHONY : all clean fclean re