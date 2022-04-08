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

NAME = 		materia

SRC = 		AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp

SRCS = 		${addprefix ./srcs/, ${SRC}}

OBJ = 		${SRCS:.cpp=.o}

CC = 		clang++

FLAGS = 	-Wall -Wextra -Werror

HEADER = 	./includes/

%.o :		%.cpp ./includes/AMateria.hpp ./includes/Character.hpp ./includes/Cure.hpp ./includes/Ice.hpp ./includes/ICharacter.hpp ./includes/IMateriaSource.hpp ./includes/MateriaSource.hpp
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