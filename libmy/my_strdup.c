/*
** my_strdup.c for all in /home/lemeh/Rendu/lib
**
** Made by Lemeh
** Login   <lemeh@epitech.net>
**
** Started on  Mon Jan 25 14:08:22 2016 Lemeh
** Last update Mon Jan 25 14:09:02 2016 Lemeh
*/

#include <stdlib.h>
#include "my.h"

char    *my_strdup(char *str)
{
  int   i;
  char  *new;

  new = malloc(sizeof(char) * (my_strlen(str)+ 1));
  if (new == NULL)
    return (NULL);
  i = 0;
  while (str[i] != '\0')
    {
      new[i] = str[i];
      i++;
    }
  new[i] = '\0';
  return (new);
}
