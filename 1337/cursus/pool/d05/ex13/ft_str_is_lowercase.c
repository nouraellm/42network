/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 05:04:17 by mochegri          #+#    #+#             */
/*   Updated: 2019/07/22 03:30:56 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_low(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (ft_is_low(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
