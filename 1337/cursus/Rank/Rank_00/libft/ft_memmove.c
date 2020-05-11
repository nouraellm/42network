/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:46:48 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/20 16:54:29 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	if (d == s)
		return (dst);
	if (d > s && d < s + len)
	{
		while (len--)
			ft_memset((d + len), (char)(*(s + len)), 1);
		ft_memset(d, *s, 1);
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}
