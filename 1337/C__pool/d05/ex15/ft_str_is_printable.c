/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 05:35:23 by mochegri          #+#    #+#             */
/*   Updated: 2019/07/22 03:43:26 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_ltr(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (ft_char_is_ltr(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
