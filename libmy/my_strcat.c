/*
** my_strcat.c for minishell1 in /home/lemeh/Rendu/PSU_2015_minishell1
**
** Made by Lemeh
** Login   <lemeh@epitech.net>
**
** Started on  Wed Jan 20 21:36:36 2016 Lemeh
** Last update Mon Jan 25 14:00:23 2016 Lemeh
*/

#include <stdlib.h>
#include "my.h"

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;
  int	k;
  char	*dest_final;
  int	size;

  size = (my_strlen(dest)) + (my_strlen(src));
  k = 0;
  i = 0;
  j = 0;
  dest_final = malloc(sizeof(char) * (size + 1));
  while (dest[i] != 0)
    {
      dest_final[i] = dest[i];
      i++;
    }
  j = my_strlen(dest);
  while (src[k] != '\0')
    dest_final[j++] = src[k++];
  dest_final[j] = '\0';
  return (dest_final);
}
