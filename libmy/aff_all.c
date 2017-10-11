/*
** aff_all.c for aff_all.c in /home/meridj/Rendu/PSU_2015_my_printf/srcs
**
** Made by Lemeh
** Login   <meridj@epitech.net>
**
** Started on  Mon Nov  9 22:57:57 2015 Lemeh
** Last update Tue Feb  2 18:17:46 2016 Lemeh
*/

#include "my.h"
#include <unistd.h>
#include <stdlib.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void	my_put_error(char *str)
{
  write(2, str, my_strlen(str));
  exit(42);
}

void	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar ('-');
      nb = nb * -1;
    }
  if (nb > 9)
    my_put_nbr(nb / 10);
  my_putchar((nb % 10) + 48);
}
