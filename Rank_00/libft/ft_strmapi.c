/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:17:03 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/21 02:45:56 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptr;

	i = 0;
	if (s == NULL)
		return (NULL);
	ptr = (char*)malloc(sizeof(char) * (ft_strlen((char*)s) + 1));
	if (ptr == NULL)
		return (NULL);
	else
	{
		while (s[i])
		{
			ptr[i] = (*f)(i, s[i]);
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
