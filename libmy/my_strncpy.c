/*
** my_strncpy.c for all in /home/lemeh/Rendu/lib
**
** Made by Lemeh
** Login   <lemeh@epitech.net>
**
** Started on  Tue Jan 26 10:18:05 2016 Lemeh
** Last update Tue Jan 26 15:50:07 2016 Lemeh
*/

#include "my.h"
#include <stdlib.h>

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  dest = malloc(sizeof(char) * (my_strlen(src) + 1));
  while (src[i] && i < n)
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
