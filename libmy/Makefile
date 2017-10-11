##
## Makefile for Makefile in /home/meridj_m/Rendu/PSU_2015_my_printf
## 
## Made by Mehdi Meridja
## Login   <meridj_m@epitech.net>
## 
## Started on  Tue Nov  3 14:05:37 2015 Mehdi Meridja
## Last update Wed Feb  3 10:48:05 2016 Lemeh
##

NAME	= libmy.a

CFLAGS	= -Wall -W -Wextra -I../include/

SRCS	= my_printf.c		\
	  aff_all2.c		\
	  aff_all.c		\
	  flag.c		\
	  get_next_line.c	\
	  my_getnbr.c		\
	  my_putnbr.c		\
	  my_strcat.c		\
	  my_strcpy.c		\
	  my_strdup.c		\
	  my_strncpy.c		\
	  my_strndup.c		\
	  my_str_to_wordtab.c	\
	  my_memset.c		\
	  my_realloc.c		\

OBJ	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) my/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
