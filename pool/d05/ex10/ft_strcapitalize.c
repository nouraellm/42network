/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 12:37:10 by mochegri          #+#    #+#             */
/*   Updated: 2019/07/21 04:40:00 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_up(char c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}

int		is_nbr(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int		is_low(char c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_low(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (is_up(str[i]))
		{
			if (is_low(str[i - 1]) || is_up(str[i - 1]) || is_nbr(str[i - 1]))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
