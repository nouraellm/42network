/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 01:05:36 by mochegri          #+#    #+#             */
/*   Updated: 2020/02/14 15:45:29 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

# define ZEROPAD    1
# define SIGN       2
# define PLUS       4
# define SPACE      8
# define LEFT       16
# define SMALL      32
# define SPECIAL    64
# define MAX(a, b)	(((unsigned long)a > (unsigned long)b) ? a : b)
# define MIN(a, b)	(((unsigned long)a > (unsigned long)b) ? b : a)

typedef struct		s_arg
{
	int				flags;
	int				with;
	int				precision;
	int				base;
	char			qlf;
	char			signe;
	char			number;
	char			c;
	int				locase;
	long			num;
	char			c2;
}					t_arg;

int					ft_printf(const char *format, ...);
void				ft_vsprintf(char *fmt, va_list ap);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
void				get_fwpq(char **fmt, va_list ap, t_arg *arg_i);
void				get_flags(char **fmt, t_arg *arg_i);
void				get_width(char **fmt, va_list ap, t_arg *arg_i);
void				get_presision(char **fmt, va_list ap, t_arg *arg_i);
void				get_qualifier(char **fmt, t_arg *arg_i);
void				help(char **fmt, t_arg *arg_i, va_list ap);
void				get_char(t_arg *arg_i, va_list ap, char c);
void				get_str(t_arg *arg_i, va_list ap);
void				get_signe(t_arg *arg_p);
void				get_ptr(t_arg *arg_i, va_list ap);
void				get_ws(t_arg *arg_p);
void				get_n(t_arg *arg_i, va_list ap);
void				get_sp(t_arg *arg_p);
int					is_in(char c, char *str);
void				get_num(t_arg *arg_p, va_list ap);
int					ft_atoi_s(char **s);
char				*ft_strchr(const char *str, int c);
char				*ft_strjoin(char const *s1, char const *s2);
void				number(t_arg *arg_p);
int					ft_putchar_len(char c);
void				simple(unsigned long nbr);
size_t				ft_strlen(char *str);
size_t				ft_strnlen(char *str, int nbr);
void				ft_init(int *len, int *signe, unsigned int *c, int n);
char				*ft_convert(char *tmp, t_arg *arg_p);
void				itoa_b(t_arg *arg_p);
char				*ft_strcpy(char *dest, char *src);
void				help2(t_arg *arg_p);
char				*ft_strdup(const char *src);
void				get_init(t_arg *arg_p);
#endif
