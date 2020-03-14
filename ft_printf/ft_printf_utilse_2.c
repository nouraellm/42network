/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilse_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 23:27:43 by mochegri          #+#    #+#             */
/*   Updated: 2020/02/07 04:55:35 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		help(char **fmt, t_arg *arg_p, va_list ap)
{
	arg_p->base = 10;
	if (**fmt == 'c' || **fmt == '%')
		get_char(arg_p, ap, **fmt);
	else if (**fmt == 's')
		get_str(arg_p, ap);
	if (**fmt == 'p')
		get_ptr(arg_p, ap);
	else if (is_in(**fmt, "dxXiu"))
	{
		if (**fmt == 'x')
			arg_p->flags |= SMALL;
		if (**fmt == 'x' || **fmt == 'X')
			arg_p->base = 16;
		if (**fmt == 'i' || **fmt == 'd')
			arg_p->flags |= SIGN;
		get_num(arg_p, ap);
		number(arg_p);
	}
	(*fmt)++;
}

void		get_ws(t_arg *arg_p)
{
	if (arg_p->flags & SPECIAL)
	{
		if (arg_p->base == 16)
			arg_p->with -= 2;
		else if (arg_p->base == 8)
			arg_p->with--;
	}
}

void		get_char(t_arg *arg_p, va_list ap, char c)
{
	if (!(arg_p->flags & LEFT))
		while (--(arg_p->with) > 0)
		{
			if (c == '%' && arg_p->c2 == '0')
				ft_putchar_len('0');
			else
				ft_putchar_len(' ');
		}
	ft_putchar_len((c == '%') ? '%' : (unsigned char)va_arg(ap, int));
	while (--(arg_p->with) > 0)
		ft_putchar_len(' ');
}

int			is_in(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

void		get_signe(t_arg *arg_p)
{
	arg_p->signe = 0;
	if (arg_p->flags & SIGN)
	{
		if (arg_p->num < 0)
		{
			arg_p->signe = '-';
			arg_p->with--;
			arg_p->num *= -1;
		}
		else if (arg_p->flags & PLUS)
		{
			arg_p->signe = '+';
			arg_p->with--;
		}
		else if (arg_p->flags & SPACE)
		{
			arg_p->signe = ' ';
			arg_p->with--;
		}
	}
}
