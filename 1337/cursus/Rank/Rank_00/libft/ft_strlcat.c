/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:30:56 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/25 17:22:21 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		j;
	size_t	d_s;
	size_t	s_s;

	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	d_s = ft_strlen(dst);
	s_s = ft_strlen((char*)src);
	if (d_s >= size)
		return (s_s + size);
	if (size <= d_s)
		s_s += size;
	else
		s_s += d_s;
	while (src[j] != '\0' && d_s + 1 < size)
		dst[d_s++] = src[j++];
	dst[d_s] = '\0';
	return (s_s);
}
