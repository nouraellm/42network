/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 01:35:36 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/25 20:55:34 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_nbr(const char *s, char c)
{
	int count;
	int i;
	int wrd;

	count = 0;
	wrd = 0;
	i = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			wrd = 0;
		else if (wrd == 0)
		{
			wrd = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static int		len_wrd(const char *s, int i, char c)
{
	int len;
	int j;

	len = 0;
	j = i;
	i = 0;
	while (s[j] != c)
	{
		len++;
		j++;
	}
	return (len);
}

static void		*ft_free_mem(char **wrds, int j)
{
	while (j--)
		free(wrds[j]);
	free(wrds);
	return (NULL);
}

static char		**ft_in_in(const char *s, char c, char **wrds)
{
	int i;
	int k;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < word_nbr(s, c))
	{
		k = 0;
		while (s[i] == c)
			i++;
		wrds[j] = malloc(sizeof(char) * len_wrd(s, i, c) + 1);
		if (wrds[j] == NULL)
			return (ft_free_mem(wrds, j));
		while (s[i] != c)
			wrds[j][k++] = s[i++];
		wrds[j][k] = '\0';
		j++;
	}
	wrds[j] = 0;
	return (wrds);
}

char			**ft_split(char const *s, char c)
{
	char **wrds;

	if (!s)
		return (NULL);
	wrds = malloc(sizeof(char *) * word_nbr(s, c) + 1);
	if (!wrds)
		return (NULL);
	return (ft_in_in(s, c, wrds));
}
