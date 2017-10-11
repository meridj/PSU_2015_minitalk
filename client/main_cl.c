/*
** main_cl.c for minitalk in /home/lemeh/Rendu/PSU_2015_minitalk
**
** Made by Lemeh
** Login   <lemeh@epitech.net>
**
** Started on  Mon Feb  1 10:05:00 2016 Lemeh
** Last update Wed Feb 17 14:06:27 2016 Mehdi Meridja
*/

#include "my.h"
#include "minitalk.h"
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void	my_usr1(int pid)
{
  if (kill(pid, SIGUSR1) == -1)
    {
      my_put_error("I think you have enter a bad PID !\n");
      exit(42);
    }
}

void	my_usr2(int pid)
{
  if (kill(pid, SIGUSR2) == -1)
    {
      my_put_error("I think you have enter a bad PID !\n");
      exit(42);
    }
}

void	get_my_binary(int pid, char c)
{
  int	i;

  i = 0;
  while (i < 8)
    {
      usleep(1000);
      if (((c >> i) & 1) == 1)
	my_usr1(pid);
      else if (((c >> i) & 1) == 0)
	my_usr2(pid);
      i++;
    }
}

void	send_char(int pid, char *text)
{
  int	i;

  i = 0;
  while (text[i])
    get_my_binary(pid, text[i++]);
}

void	my_params_regul(int ac)
{
  if (ac != 3)
    {
      my_put_error("USAGE: ./client [PID_SERVER] [STRING_TO_PRINT]\n");
      exit(42);
    }
}

int     main(int ac, char **av)
{
  int	pid;
  char	*string;

  my_params_regul(ac);
  string = av[2];
  pid = my_getnbr(av[1]);
  send_char(pid, string);
  return (0);
}
