/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilse_0.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 23:02:32 by mochegri          #+#    #+#             */
/*   Updated: 2020/02/14 16:53:38 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_strdup(const char *src)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)malloc(sizeof(char) * ft_strlen((char *)src) + 1);
	if (p == 0)
		return (0);
	while (i < ft_strlen((char *)src))
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char		*ft_convert(char *tmp, t_arg *arg_p)
{
	int				i;
	unsigned long	nbr;
	unsigned long	base;
	char			*t;

	nbr = (unsigned long)arg_p->num;
	base = (unsigned)arg_p->base;
	if (arg_p->locase)
		t = ft_strdup((char*)"0123456789abcdef");
	else
		t = ft_strdup((char*)"0123456789ABCDEF");
	i = 0;
	if (!nbr)
		tmp[i++] = '0';
	else
		while (nbr)
		{
			tmp[i++] = *(t + (nbr % base));
			nbr /= base;
		}
	tmp[i] = '\0';
	free(t);
	return (tmp);
}

void		get_init(t_arg *arg_p)
{
	arg_p->flags = -1;
	arg_p->with = -1;
	arg_p->precision = -1;
	arg_p->base = 10;
	arg_p->qlf = -1;
	arg_p->signe = 0;
	arg_p->number = 0;
	arg_p->c = 0;
	arg_p->locase = 1;
	arg_p->num = 0;
}

int			ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

int			ft_atoi_s(char **s)
{
	int i;

	i = 0;
	while (ft_isdigit(**s))
		i = i * 10 + (*(*s)++) - '0';
	return (i);
}
