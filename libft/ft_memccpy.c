/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:44:51 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/25 19:11:43 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*tmp;
	unsigned char	chr;
	unsigned char	*s2;

	s2 = (unsigned char*)src;
	chr = (unsigned char)c;
	tmp = (unsigned char*)dst;
	i = 0;
	if (n <= 0)
		return (NULL);
	while (i < (int)n && s2[i] != chr)
	{
		ft_memset(tmp, ((unsigned char*)src)[i], 1);
		i++;
		tmp++;
	}
	if (s2[i] == chr)
		ft_memset(tmp, ((unsigned char*)src)[i], 1);
	if (s2[i] == chr)
		return (tmp + 1);
	else
		return (NULL);
}
