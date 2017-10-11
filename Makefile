##
## Makefile for minitalk in /home/lemeh/Rendu/PSU_2015_minitalk
## 
## Made by Lemeh
## Login   <lemeh@epitech.net>
## 
## Started on  Mon Feb  1 13:47:08 2016 Lemeh
## Last update Wed Feb  3 10:47:36 2016 Lemeh
##

CC	= gcc

NAME_SE	= ./server/server

NAME_CL	= ./client/client

CFLAGS	= -Wall -W -Wextra -g -I./include/

LIB	= -L./libmy/my/ -lmy

SRCS_SE	= ./server/main_se.c	\

SRCS_CL	= ./client/main_cl.c	\

OBJS_SE	= $(SRCS_SE:.c=.o)

OBJS_CL	= $(SRCS_CL:.c=.o)

all: $(NAME_SE) $(NAME_CL)

$(NAME_SE): $(OBJS_SE)
	$(CC) $(OBJS_SE) -o $(NAME_SE) $(LIB)

$(NAME_CL): $(OBJS_CL)
	$(CC) $(OBJS_CL) -o $(NAME_CL) $(LIB)

clean:
	rm -f $(OBJS_SE)
	rm -f $(OBJS_CL)

fclean: clean
	rm -f $(NAME_SE)
	rm -f $(NAME_CL)

re: fclean all

.PHONY: all clean fclean re
