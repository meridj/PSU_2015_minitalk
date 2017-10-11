/*
** my_realloc.c for all in /home/lemeh/Rendu/lib
**
** Made by Lemeh
** Login   <lemeh@epitech.net>
**
** Started on  Wed Jan 27 12:31:42 2016 Lemeh
** Last update Wed Jan 27 12:33:08 2016 Lemeh
*/

#include "my.h"
#include <stdlib.h>

char	*my_realloc(char *str, int n)
{
  int	i;
  char	*new_str;

  i = 0;
  if ((new_str = malloc(sizeof(char) * (my_strlen(str) + n))) == NULL)
    return (NULL);
  while (str[i] != 0)
    {
      new_str[i] = str[i];
      i++;
    }
  free(str);
  return (new_str);
}
