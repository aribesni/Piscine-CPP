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

NAME = phonebook

SRC = Phonebook.cpp main.cpp

SRCS = $(addprefix ./srcs/, $(SRC))

CC = clang++

HEADER = ./includes/

FLAGS = -Wall -Wextra -Werror

OBJ = ${SRCS:.cpp=.o}

%.o:	%.cpp ./includes/Phonebook.hpp
		${CC} ${FLAGS} -I ${HEADER} -c $< -o $@

all : ${NAME}

${NAME} : ${OBJ}
		${CC} ${FLAGS} ${OBJ} -o ${NAME}

clean : 
		rm -f ${OBJ}

fclean : clean
		rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re