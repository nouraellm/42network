/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 23:30:12 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/25 19:42:08 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*help(const char *str, const char *to_find, size_t len)
{
	if (!*to_find)
		return ((char*)str);
	if (len == 0)
		return (0);
	if (str[0] == '\0' || str == NULL)
		return (NULL);
	return (0);
}

char		*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	if (!*to_find || len == 0 || str[0] == '\0' || str == NULL)
		return (help(str, to_find, len));
	while (str[++i])
		if (str[i] == to_find[0])
		{
			k = i;
			j = 0;
			while (str[k] == to_find[j] && k < (int)len && str[k]
					&& to_find[j])
			{
				j++;
				k++;
			}
			if (to_find[j] == '\0')
				return ((char *)str + i);
		}
	return ((str[0] == '\0' || *to_find == '\0') ? (char*)str : NULL);
}
