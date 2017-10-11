/*
** my_printf.c for my_printf in /home/lemeh/Rendu/lib/PSU_2015_my_printf
**
** Made by Lemeh
** Login   <lemeh@epitech.net>
**
** Started on  Tue Jan 26 12:23:01 2016 Lemeh
** Last update Tue Feb  2 19:32:03 2016 Lemeh
*/

#include <stdlib.h>
#include "my.h"

ptr_func	*tab_func()
{
  ptr_func	*tab;

  tab = malloc(sizeof(char) * 5);
  tab[0] = &flag_c;
  tab[1] = &flag_d_i;
  tab[2] = &flag_s;
  tab[3] = &flag_modulo;
  return (tab);
}

int		check_flag(char c, va_list ap)
{
  int		j;
  char		*str2;
  ptr_func	*tab;

  j = 0;
  tab = tab_func();
  str2 = "cds%";
  while (str2[j] != c && j < 6)
    j++;
  if (str2[j] != c)
    return (-1);
  else
    tab[j](ap);
  return (0);
}

int		my_printf(char *format, ...)
{
  int		i;
  va_list	ap;

  i = 0;
  va_start(ap, format);
  while (format[i] != '\0')
    {
      if (format[i] == '%')
	{
	  i++;
	  check_flag(format[i], ap);
	  i++;
	}
      else
	my_putchar(format[i++]);
    }
  va_end(ap);
  return (0);
}
