/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 01:54:23 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/25 19:23:03 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	if (s[len] == '\0' && (char)c == '\0')
		return ((char*)s + len);
	while (len)
	{
		if (s[len] == (char)c)
			return ((char*)s + len);
		else
			len--;
	}
	if (*s == (char)c)
		return ((char*)s);
	return (0);
}
