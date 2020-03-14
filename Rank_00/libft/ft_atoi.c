/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:33:45 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/25 19:31:51 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_is_p_n(char c, int *i, int *signe)
{
	if (c == '-' || c == '+')
	{
		if (c == '-')
			*signe = -1;
		*i = (*i + 1);
	}
}

int			ft_atoi(const char *str)
{
	int				i;
	unsigned int	result;
	int				signe;

	signe = 1;
	result = 0;
	i = 0;
	while (str[i] >= 0 && str[i] <= 32)
		if (str[i] == '\e' || str[i] == '\0')
			return (0);
		else
			i++;
	ft_is_p_n(str[i], &i, &signe);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (result * signe);
		result = result + (str[i] - '0');
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			result *= 10;
		i++;
	}
	if (result > 2147483648)
		return (signe == -1 ? 0 : -1);
	return (signe * result);
}
