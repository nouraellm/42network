/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilse_3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 23:40:42 by mochegri          #+#    #+#             */
/*   Updated: 2020/02/09 05:16:26 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			ft_vsprintf(char *fmt, va_list ap)
{
	t_arg		arg_i;

	while (*fmt)
	{
		if (*fmt != '%')
		{
			ft_putchar_len(*(fmt++));
			continue;
		}
		++fmt;
		get_fwpq(&fmt, ap, &arg_i);
		if (*fmt == 'n')
			get_n(&arg_i, ap);
		if (is_in(*fmt, "cspdiuxX%"))
		{
			help(&fmt, &arg_i, ap);
			continue;
		}
		++fmt;
	}
}

void			get_sp(t_arg *arg_p)
{
	if (arg_p->flags & SPECIAL)
	{
		if (arg_p->base == 16)
			arg_p->with -= 2;
		else if (arg_p->base == 8)
			arg_p->with--;
	}
}

void			get_ptr(t_arg *arg_p, va_list ap)
{
	arg_p->flags |= SPECIAL;
	arg_p->locase = 1;
	if (arg_p->with == -1)
	{
		arg_p->flags |= ZEROPAD;
	}
	arg_p->base = 16;
	arg_p->flags |= SMALL;
	arg_p->num = va_arg(ap, size_t);
	arg_p->with -= 2;
	arg_p->c = -97;
	number(arg_p);
}

void			get_str(t_arg *arg_p, va_list ap)
{
	char	*s;
	int		len;
	int		i;
	int		aloc;

	i = -1;
	aloc = 0;
	s = va_arg(ap, char *);
	if (s == NULL)
	{
		s = ft_strdup((char*)"(null)");
		aloc = 1;
	}
	len = MIN(ft_strlen(s), arg_p->precision);
	if (!(arg_p->flags & LEFT))
		while (len < arg_p->with--)
			ft_putchar_len(' ');
	while (++i < len)
		ft_putchar_len(*s++);
	while (len < arg_p->with--)
		ft_putchar_len(' ');
	if (aloc)
		free(s - i);
}

void			help2(t_arg *arg_p)
{
	if (arg_p->flags & SPECIAL)
	{
		ft_putchar_len('0');
		ft_putchar_len((arg_p->flags & SMALL) ? 'x' : 'X');
	}
	if (!(arg_p->flags & LEFT))
		while ((arg_p->with)-- > 0)
			ft_putchar_len(arg_p->c);
}
