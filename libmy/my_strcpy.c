/*
** my_strcpy.c for all in /home/lemeh/Rendu/lib
**
** Made by Lemeh
** Login   <lemeh@epitech.net>
**
** Started on  Tue Jan 26 10:04:42 2016 Lemeh
** Last update Tue Jan 26 15:50:25 2016 Lemeh
*/

#include "my.h"
#include <stdlib.h>

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  dest = malloc(sizeof(char) * (my_strlen(src) + 1));
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
