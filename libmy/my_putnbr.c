/*
** my_putnbr.c for all in /home/lemeh/Rendu/lib
**
** Made by Lemeh
** Login   <lemeh@epitech.net>
**
** Started on  Tue Jan 26 13:27:27 2016 Lemeh
** Last update Tue Jan 26 13:29:30 2016 Lemeh
*/

#include "my.h"

void	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  if (nb > 9)
    my_putnbr(nb / 10);
  my_putchar((nb % 10) + 48);
}
