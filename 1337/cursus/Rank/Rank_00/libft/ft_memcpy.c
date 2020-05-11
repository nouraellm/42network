/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:26:37 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/25 19:10:03 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	*tmp;

	tmp = (unsigned char*)dst;
	i = 0;
	if (dst == src)
		return (dst);
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < (int)n)
	{
		ft_memset(tmp, ((char*)src)[i], 1);
		i++;
		tmp++;
	}
	return (dst);
}
