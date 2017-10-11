/*
** flag_2.c for flag_2 in /home/meridj/Rendu/PSU_2015_my_printf/srcs
**
** Made by Lemeh
** Login   <meridj@epitech.net>
**
** Started on  Mon Nov  9 23:52:04 2015 Lemeh
** Last update Tue Feb  2 15:30:09 2016 Lemeh
*/

#include <stdarg.h>
#include "my.h"

void    flag_d_i(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
}

void    flag_c(va_list ap)
{
  my_putchar((char) va_arg(ap, int));
}

void    flag_s(va_list ap)
{
  my_putstr(va_arg(ap, char *));
}

void    flag_modulo(va_list ap)
{
  (void)ap;
  my_putchar('%');
}
