/*
** my.h for all in /home/lemeh/Rendu/lib/libprint
**
** Made by Lemeh
** Login   <lemeh@epitech.net>
**
** Started on  Tue Jan 26 13:07:04 2016 Lemeh
** Last update Wed Jan 27 12:46:15 2016 Lemeh
*/

#ifndef MY_H_
# define MY_H_

/* _ALL_ */

int     my_strlen(char *str);
int	my_getnbr(char *str);
char	*my_memset(char *str, int c, int n);
char	*my_strcat(char *dest, char *src);
char	*my_strdup(char *str);
char	*my_strndup(char *str, int n);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int n);
char	**my_str_to_wordtab(char *str);
char	*my_realloc(char *str, int n);
void	my_putstr(char *str);
void	my_putchar(char c);
void	my_put_nbr(int nb);
void	my_put_error(char *str);
void    my_putnbr(int nb);

/* _GET_NEXT_LINE_ */

# ifndef READ_SIZE
# define READ_SIZE (67)
# endif /* !READ_SIZE  */

void    my_alloc(char *str, int n);
int     read_buffer(const int fd, int var);
char    *add_line(char *line, int var);
char    *get_next_line(const int fd);

typedef struct  s_get
{
  int           var;
  char          *line;
  int           i;
}               t_get;

/* _MY_PRINTF_ */

#include <stdarg.h>

typedef void (*ptr_func)(va_list ap);

ptr_func        *tab_func();
int		my_printf(char *format, ...);
int             check_flag(char c, va_list ap);
void            my_put_error(char *str);
void            my_put_nbrunsigned(unsigned int nb);
void            my_put_nbr_binaire(int nb, char *base);
void            my_put_nbr_base(long nb, char *base);
void            my_put_nbr_hexa(unsigned int nb, char *base);
void            my_putstr_octal(char *str);
void            flag_d_i(va_list ap);
void            flag_c(va_list ap);
void            flag_s(va_list ap);
void            flag_p(va_list ap);
void            flag_b(va_list ap);
void            flag_x(va_list ap);
void            flag_X(va_list ap);
void            flag_u(va_list ap);
void            flag_o(va_list ap);
void            flag_S(va_list ap);
void            flag_modulo(va_list ap);

#endif /* MY_H_ */
