/*
** my_strdup.c for all in /home/lemeh/Rendu/lib
**
** Made by Lemeh
** Login   <lemeh@epitech.net>
**
** Started on  Mon Jan 25 14:05:13 2016 Lemeh
** Last update Mon Jan 25 14:05:53 2016 Lemeh
*/

#include <stdlib.h>
#include "my.h"

char    *my_strndup(char *str, int n)
{
  int   i;
  char  *new;

  new = malloc(sizeof(char) * (n + 1));
  if (new == NULL)
    return (NULL);
  i = 0;
  while (str[i] != '\0' && i < n)
    {
      new[i] = str[i];
      i++;
    }
  new[i] = '\0';
  return (new);
}
