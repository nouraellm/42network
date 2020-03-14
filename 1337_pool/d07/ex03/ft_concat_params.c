/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 01:12:50 by mochegri          #+#    #+#             */
/*   Updated: 2019/07/25 18:14:19 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int		ft_taille(int ac, char **av)
{
	int s;
	int i;

	i = 1;
	s = 0;
	while (i < ac)
	{
		s = s + ft_strlen(av[i]) + 1;
		i++;
	}
	return (s);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 1;
	j = 0;
	str = (char*)malloc(sizeof(char) * ft_taille(argc, argv) + 1);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[k] = argv[i][j];
			k++;
			j++;
		}
		if (i != argc - 1)
			str[k] = '\n';
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
