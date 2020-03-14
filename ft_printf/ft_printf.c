/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 12:02:42 by mochegri          #+#    #+#             */
/*   Updated: 2020/02/07 05:06:22 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int g_nbr;

int			ft_printf(const char *fmt, ...)
{
	int			printed;
	va_list		args;

	g_nbr = 0;
	va_start(args, fmt);
	ft_vsprintf((char*)fmt, args);
	va_end(args);
	printed = ft_putchar_len(-97);
	return (printed);
}

void		get_n(t_arg *arg_i, va_list ap)
{
	long		*ip;

	if (arg_i->qlf == 'l')
	{
		ip = va_arg(ap, long*);
		*ip = (long)ft_putchar_len(0);
	}
	else
	{
		ip = (long*)va_arg(ap, int*);
		*ip = ft_putchar_len(0);
	}
}

void		get_num(t_arg *arg_p, va_list ap)
{
	if (arg_p->qlf == 'l')
		arg_p->num = va_arg(ap, unsigned long);
	else if (arg_p->qlf == 'h')
	{
		arg_p->num = (unsigned short)va_arg(ap, int);
		if (arg_p->flags & SIGN)
			arg_p->num = (short)va_arg(ap, int);
	}
	else if (arg_p->flags & SIGN)
		arg_p->num = va_arg(ap, int);
	else
		arg_p->num = va_arg(ap, unsigned int);
	arg_p->locase = (arg_p->flags & SMALL) ? 1 : 0;
	if (arg_p->flags & LEFT)
		arg_p->flags &= ~ZEROPAD;
	arg_p->c = (arg_p->flags & ZEROPAD) ? '0' : ' ';
	get_signe(arg_p);
	get_sp(arg_p);
	get_ws(arg_p);
}

void		number(t_arg *arg_p)
{
	int		i;
	char	tmp[66];

	ft_convert(tmp, arg_p);
	i = ft_strlen(tmp);
	if (i > arg_p->precision && (arg_p->num != 0 || arg_p->precision != 0))
		arg_p->precision = i;
	arg_p->with -= arg_p->precision;
	if (!(arg_p->flags & (ZEROPAD + LEFT)))
		while (arg_p->with-- > 0)
			ft_putchar_len(' ');
	if (arg_p->signe)
		ft_putchar_len(arg_p->signe);
	help2(arg_p);
	while (i < arg_p->precision)
	{
		ft_putchar_len('0');
		(arg_p->precision)--;
	}
	if (arg_p->num != 0 || arg_p->precision != 0)
		while (i-- > 0)
			ft_putchar_len(tmp[i]);
	while (arg_p->with-- > 0)
		ft_putchar_len(' ');
}

int			ft_putchar_len(char c)
{
	if (c != -97)
	{
		write(1, &c, 1);
		g_nbr++;
	}
	return (g_nbr);
}
