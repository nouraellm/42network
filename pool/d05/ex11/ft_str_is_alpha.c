/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 00:33:37 by mochegri          #+#    #+#             */
/*   Updated: 2019/07/22 03:13:42 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_ltr(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
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
