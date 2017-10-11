/*
** main_se.c for minitalk in /home/lemeh/Rendu/PSU_2015_minitalk
**
** Made by Lemeh
** Login   <lemeh@epitech.net>
**
** Started on  Mon Feb  1 13:14:46 2016 Lemeh
** Last update Wed Feb 17 14:04:56 2016 Mehdi Meridja
*/

#include "my.h"
#include "minitalk.h"
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

t_talk	talk;

void	print_char(int sig)
{
  if (sig == SIGUSR1)
    {
      talk.c = talk.c + (1 << talk.i++);
      if (talk.i >= 8)
	{
	  my_putchar(talk.c);
	  talk.c = 0;
	  talk.i = 0;
	}
    }
  else if (sig == SIGUSR2)
    {
      talk.c = talk.c + (0 << talk.i++);
      if (talk.i >= 8)
	{
	  my_putchar(talk.c);
	  talk.c = 0;
	  talk.i = 0;
	}
    }
}

void	print_my_pid()
{
  pid_t	pid;

  pid = getpid();
  my_printf("PID du serveur: %d\n", pid);
}

void    my_no_param(int ac)
{
  if (ac != 1)
    {
      my_put_error("Paramètre non nécéssaire\n");
      exit(42);
    }
}

int	main(int ac, char **av)
{
  (void)av;
  my_no_param(ac);
  usleep(1000);
  if ((signal(SIGUSR1, print_char)) == SIG_ERR)
    {
      my_put_error("Error signal (SIGUSR1");
      return (-1);
    }
  if ((signal(SIGUSR2, print_char)) == SIG_ERR)
    {
      my_put_error("Error signal (SIGUSR2)");
      return (-1);
    }
  print_my_pid();
  while (linux)
    pause();
  return (0);
}
