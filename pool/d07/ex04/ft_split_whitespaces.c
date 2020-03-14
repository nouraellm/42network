/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 02:17:50 by mochegri          #+#    #+#             */
/*   Updated: 2019/07/25 17:38:26 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_space(char c)
{
	if (c == '\n' || c == '\t' || c == ' ')
		return (1);
	else
		return (0);
}

int		ft_wrd_nbr(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (ft_is_space(str[i]) && str[i] != '\0')
			i++;
		if (str[i] != '\0')
			j++;
		while (!ft_is_space(str[i]) && str[i] != '\0')
			i++;
	}
	return (j);
}

int		ft_put_it_in(int i, int j, char *str, char **dest)
{
	int	m;

	m = 0;
	while (!ft_is_space(str[i]) && str[i] != '\0')
	{
		dest[j][m] = str[i];
		i++;
		m++;
	}
	dest[j][m] = '\0';
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char	**new;
	int		i;
	int		j;
	int		k;
	int		n_wrd;

	n_wrd = ft_wrd_nbr(str);
	i = 0;
	j = 0;
	k = 0;
	new = (char **)malloc(sizeof(char*) * (n_wrd + 1));
	while (str[i] != '\0')
	{
		while (ft_is_space(str[i]) && str[i] != '\0')
			i++;
		k = i;
		while (!ft_is_space(str[k]) && str[k] != '\0')
			k++;
		new[j] = malloc(sizeof(char) * (k - i + 1));
		i = ft_put_it_in(i, j, str, new);
		if (j < n_wrd)
			j++;
	}
	new[j] = 0;
	return (new);
}
