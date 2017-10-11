/*
** my_getnbr.c for all in /home/lemeh
**
** Made by Lemeh
** Login   <lemeh@epitech.net>
**
** Started on  Fri Jan 22 10:16:23 2016 Lemeh
** Last update Tue Jan 26 14:41:51 2016 Lemeh
*/

#include "my.h"

int             my_getnbr(char *str)
{
  int           res;

  if (*str == '-')
    return (-my_getnbr(str + 1));
  if (*str == '+')
    return (my_getnbr(str + 1));
  res = 0;
  while (*str)
    {
      res = res * 10;
      res = res + *str - '0';
      str = str + 1;
    }
  return (res);
}
