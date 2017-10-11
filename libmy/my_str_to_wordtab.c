/*
** my_str_to_wordtab.c for all in /home/lemeh/Rendu/lib
**
** Made by Lemeh
** Login   <lemeh@epitech.net>
**
** Started on  Mon Jan 25 14:06:06 2016 Lemeh
** Last update Mon Jan 25 14:07:56 2016 Lemeh
*/

#include <stdlib.h>
#include "my.h"

int	cpt_words(char *str)
{
  int   i;
  int   cpt;

  i = 0;
  cpt = 0;
  while (str[i] != '\0')
    {
      if (str[i] != 0 && str[i] != '\t' && str[i] != ' ')
      {
	  cpt++;
	  while (str[i] != 0 && str[i] != '\t' && str[i] != ' ')
	    i++;
      }
      if (str[i] != 0)
	i++;
    }
  return (cpt);
}

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	j;
  int	deb;
  char	**tab;

  j = 0;
  i = 0;
  deb = 0;
  tab = malloc(sizeof(char *) * (cpt_words(str) + 1));
  if (tab == NULL)
    return (NULL);
  while (str[i] != 0)
    {
      if (str[i] != 0 && str[i] != ' ' && str[i] != '\t')
	{
	  deb = i;
	  while (str[i] != 0 && str[i] != ' ' && str[i] != '\t')
	    i++;
	  tab[j] = my_strndup(&str[deb], i - deb);
	  j++;
	}
      else
	i++;
    }
  tab[j] = NULL;
  return (tab);
}
