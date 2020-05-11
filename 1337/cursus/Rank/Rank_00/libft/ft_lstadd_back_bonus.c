/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 03:52:18 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/27 03:52:51 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (new)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			while ((*alst)->next)
				*alst = (*alst)->next;
			(*alst)->next = new;
		}
	}
}
