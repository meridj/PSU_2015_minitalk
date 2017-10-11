/*
** aff_all2.c for aff_all2.c in /home/meridj/Rendu/PSU_2015_my_printf/srcs
**
** Made by Lemeh
** Login   <meridj@epitech.net>
**
** Started on  Mon Nov  9 23:49:33 2015 Lemeh
** Last update Tue Feb  2 15:31:16 2016 Lemeh
*/

#include "my.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void	my_put_nbr_base(long nb, char *base)
{
  int	j;
  long	div;
  long	size;

  size = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  div = 1;
  while ((nb / div) >= size)
    div = div * size;
  while (div > 0)
    {
      j = (nb / div) % size;
      my_putchar(base[j]);
      div = div / size;
    }
}
