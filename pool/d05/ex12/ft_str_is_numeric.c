/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 03:38:42 by mochegri          #+#    #+#             */
/*   Updated: 2019/07/22 03:22:29 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_nbr(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (ft_char_nbr(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
