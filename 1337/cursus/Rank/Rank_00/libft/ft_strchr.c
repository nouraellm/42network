/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 00:40:35 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/16 01:23:15 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*tmp;
	char	locate;

	locate = (char)c;
	tmp = (char*)str;
	i = 0;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == locate)
			return (tmp + i);
		else
			i++;
	}
	if (tmp[i] == '\0' && locate == '\0')
		return (tmp + i);
	return (NULL);
}
