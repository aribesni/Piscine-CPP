# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/26 16:10:24 by aribesni          #+#    #+#              #
#    Updated: 2022/03/26 16:10:25 by aribesni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		squad

SRC = 		AssaultTerminator.cpp Squad.cpp TacticalMarine.cpp main.cpp

SRCS = 		${addprefix ./srcs/, ${SRC}}

OBJ = 		${SRCS:.cpp=.o}

CC = 		clang++

FLAGS = 	-Wall -Wextra -Werror

HEADER = 	./includes/

%.o :		%.cpp ./includes/AssaultTerminator.hpp ./includes/ISpaceMarine.hpp ./includes/ISquad.hpp ./includes/Squad.hpp ./includes/TacticalMarine.hpp
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