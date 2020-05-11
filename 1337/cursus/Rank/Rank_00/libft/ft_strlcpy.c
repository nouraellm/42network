/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 21:52:32 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/23 17:28:48 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	d_s;
	size_t	s_s;

	j = 0;
	if (!dst)
		return (0);
	d_s = ft_strlen(dst);
	s_s = ft_strlen((char*)src);
	while (src[j] != '\0' && j + 1 < size)
	{
		dst[j] = src[j];
		j++;
	}
	if (size != 0)
		dst[j] = '\0';
	return (s_s);
}
