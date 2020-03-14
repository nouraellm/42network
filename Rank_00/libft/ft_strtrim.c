/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 00:55:27 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/25 22:28:24 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find(char *s, char c)
{
	int i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *s2)
{
	int		j;
	int		start;
	int		end;
	char	*res;

	j = 0;
	if (!s1)
		return (NULL);
	while (find((char*)s2, s1[j]))
		j++;
	start = j;
	j = ft_strlen(s1);
	while (find((char*)s2, s1[j - 1]))
		j--;
	end = j;
	if (start > end)
		return (ft_strdup(""));
	res = malloc(sizeof(char) * (end - start + 1));
	if (res == NULL)
		return (NULL);
	j = -1;
	while (++j < (end - start))
		res[j] = s1[start + j];
	res[j] = '\0';
	return (res);
}
