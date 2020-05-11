/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 22:40:23 by mochegri          #+#    #+#             */
/*   Updated: 2019/07/25 13:09:31 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	tab = NULL;
	if (min >= max)
		return (tab);
	else
		tab = (int*)(malloc(sizeof(int) * (max - min)));
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
