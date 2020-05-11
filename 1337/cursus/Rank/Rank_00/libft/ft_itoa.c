/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 04:09:18 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/25 19:33:17 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_convert(int len, unsigned int c, char *res)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (c == 10)
		{
			res[i++] = '0';
			res[i++] = '1';
		}
		else
		{
			res[i++] = '0' + (c % 10);
			c /= 10;
		}
	}
	res[i] = '\0';
	return (res);
}

static void		ft_init(int *len, int *signe, unsigned int *c, int n)
{
	*len = 1;
	*signe = (n < 0) ? -1 : 1;
	*c = *signe * n;
	while (*c / 10)
	{
		(*len)++;
		*c /= 10;
	}
	*c = *signe * n;
}

char			*ft_itoa(int n)
{
	int				len;
	int				signe;
	char			*res;
	char			*res1;
	unsigned int	c;

	ft_init(&len, &signe, &c, n);
	res = (char*)malloc(sizeof(char) * (len + 2));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		res1 = res + 1;
		res1 = ft_strrev((ft_convert(len, c, res1)));
	}
	else
		res = ft_strrev((ft_convert(len, c, res)));
	return (res);
}
