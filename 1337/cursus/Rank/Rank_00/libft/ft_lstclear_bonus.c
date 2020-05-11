/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 00:28:48 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/27 15:18:04 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*t1;
	t_list	*t2;

	if (*lst && del)
	{
		t1 = *lst;
		while (t1)
		{
			t2 = t1;
			t1 = t1->next;
			del(t2->content);
			free(t2);
		}
	}
}
