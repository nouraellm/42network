/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 21:37:43 by mochegri          #+#    #+#             */
/*   Updated: 2019/11/24 21:45:36 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		if (s[len++] == (char)c)
			return ((char*)s + len - 1);
	return (0);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	s1_len = ft_strlen((char*)s1);
	s2_len = ft_strlen((char*)s2);
	if (!(res = malloc((s1_len + s2_len + 1) * sizeof(char))))
		return (NULL);
	else
	{
		while (i < s1_len)
			res[j++] = s1[i++];
		i = 0;
		while (i < s2_len)
			res[j++] = s2[i++];
	}
	res[j] = '\0';
	return (res);
}

size_t	ft_strlen(const char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		;
	return (i);
}

char	*ft_char_calloc(size_t cont)
{
	char	*str;

	str = (char*)malloc(cont);
	if (str == 0)
		return (0);
	return (str);
}
