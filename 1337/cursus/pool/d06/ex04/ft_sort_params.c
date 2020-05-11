/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:18:54 by mochegri          #+#    #+#             */
/*   Updated: 2019/07/22 16:59:44 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	if ((s1[i] != '\0' && s2[i] == '\0') || ((s1[i] == '\0' && s2[i] != '\0')))
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

void	swap(char **s1, char **s2)
{
	char *p;

	p = *s1;
	*s1 = *s2;
	*s2 = p;
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = argc - 1;
	while (i > 0)
	{
		j = 1;
		while (j <= i - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				swap(&argv[j + 1], &argv[j]);
			j++;
		}
		i--;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
