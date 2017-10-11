/*
** get_next_line.c for get_next_line in /home/meridj_m/Rendu/CPE_2015_getnextlin
**
** Made by Mehdi Meridja
** Login   <meridj_m@epitech.net>
**
** Started on  Fri Jan  8 15:39:17 2016 Mehdi Meridja
** Last update Wed Jan 27 11:33:53 2016 Lemeh
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

static char	buff[READ_SIZE];
static int	ret_read;
static int	n;

char	*add_line(char *line, int var)
{
  char	*new;
  int	size;
  int	i;

  i = -1;
  size = 0;
  if (line != NULL)
    size = my_strlen(line);
  new = malloc(var + size + 1);
  my_alloc(new, var + size + 1);
  while (++i < size)
    new[i] = line[i];
  i = 0;
  while (i < var)
    {
      new[size + i] = buff[n + i];
      i++;
    }
  new[size + i] = '\0';
  if (line != NULL)
    free(line);
  n = n + (var + 1);
  return (new);
}

void	my_alloc(char *str, int n)
{
  int	i;

  i = 0;
  while (i < n)
    {
      str[i] = '\0';
      i++;
    }
}

int	read_buffer(const int fd, int var)
{
  ret_read = read(fd, buff, READ_SIZE);
  n = 0;
  var = 0;
  (void)var;
  return (ret_read);
}

char	*get_next_line(const int fd)
{
  t_get	get;

  get.i = 0;
  get.var = 0;
  get.line = NULL;
  while (get.i != READ_SIZE)
    {
      if (n >= ret_read && read_buffer(fd, get.var) < 1)
	return (get.line);
      if (buff[n + get.var] == '\n')
	{
	  get.line = add_line(get.line, get.var);
	  return (get.line);
	}
      if (n + get.var == ret_read - 1)
	get.line = add_line(get.line, get.var + 1);
      get.var++;
      get.i++;
    }
  get.line = add_line(get.line, get.var);
  n--;
  return (get.line);
}
