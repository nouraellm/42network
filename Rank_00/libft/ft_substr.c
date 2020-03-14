/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 00:15:05 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/23 17:50:18 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr_ch;
	int		i;

	i = 0;
	ptr_ch = NULL;
	if (!s)
		return (NULL);
	if (start > len)
		len = 0;
	ptr_ch = (char*)malloc(((int)len + 1) * sizeof(char));
	if (ptr_ch == NULL)
		return (0);
	else
	{
		while (s[i] != '\0' && i < (int)len)
		{
			ptr_ch[i] = s[(int)start + i];
			i++;
		}
		ptr_ch[i] = '\0';
	}
	return (ptr_ch);
}
