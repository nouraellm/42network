/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilse_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 23:20:31 by mochegri          #+#    #+#             */
/*   Updated: 2020/02/14 16:42:17 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_fwpq(char **fmt, va_list ap, t_arg *arg_p)
{
	get_init(arg_p);
	get_flags(fmt, arg_p);
	get_width(fmt, ap, arg_p);
	get_presision(fmt, ap, arg_p);
	get_qualifier(fmt, arg_p);
}

void	get_flags(char **fmt, t_arg *arg_i)
{
	int		flgs;

	flgs = 0;
	while (**fmt && is_in(**fmt, "-+ #0"))
	{
		if (**fmt == '-')
			flgs |= LEFT;
		if (**fmt == ' ')
			flgs |= SPACE;
		if (**fmt == '+')
			flgs |= PLUS;
		if (**fmt == '#')
			flgs |= SPECIAL;
		if (**fmt == '0')
		{
			flgs |= ZEROPAD;
			arg_i->c2 = '0';
		}
		++(*fmt);
	}
	arg_i->flags = flgs;
}

void	get_width(char **fmt, va_list ap, t_arg *arg_i)
{
	int wth;

	wth = -1;
	if (ft_isdigit(**fmt))
		wth = ft_atoi_s(fmt);
	else if (**fmt == '*')
	{
		(*fmt)++;
		wth = va_arg(ap, int);
		if (wth < 0)
		{
			wth = -wth;
			arg_i->flags |= LEFT;
		}
	}
	arg_i->with = wth;
}

void	get_presision(char **fmt, va_list ap, t_arg *arg_i)
{
	int prs;

	prs = -1;
	if (**fmt == '.')
	{
		arg_i->flags &= ~ZEROPAD;
		(*fmt)++;
		prs = 0;
		if (ft_isdigit(**fmt))
			prs = ft_atoi_s(fmt);
		if (**fmt == '*')
		{
			(*fmt)++;
			prs = va_arg(ap, int);
		}
		if (prs < 0)
			prs = -1;
	}
	arg_i->precision = prs;
}

void	get_qualifier(char **fmt, t_arg *arg_i)
{
	char qlf;

	qlf = -1;
	if ((**fmt == 'h') || (**fmt == 'l') || (**fmt == 'L'))
		qlf = *(*fmt++);
	arg_i->qlf = qlf;
}
