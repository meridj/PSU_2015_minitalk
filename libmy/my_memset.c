/*
** my_memset.c for all in /home/lemeh/Rendu/lib
**
** Made by Lemeh
** Login   <lemeh@epitech.net>
**
** Started on  Wed Jan 27 12:07:34 2016 Lemeh
** Last update Wed Jan 27 12:08:05 2016 Lemeh
*/

#include "my.h"
#include <stdlib.h>

char    *my_memset(char *str, int c, int n)
{
  int   i;

  if ((str = malloc(sizeof(char) * (4 + 1))) == NULL)
    {
      my_put_error("Fail malloc in function my_memset");
      return (NULL);
    }
  i = 0;
  while (i < n)
    str[i++] = c;
  str[i] = '\0';
  return (str);
}
