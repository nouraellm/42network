/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 04:17:03 by mochegri          #+#    #+#             */
/*   Updated: 2019/10/27 20:58:06 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear_last(t_list *first, t_list *last, void (*del)(void *))
{
	t_list *z;

	while (first != last)
	{
		z = first->next;
		ft_lstdelone(first, del);
	}
	ft_lstdelone(last, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *t2;
	t_list *t;

	t2 = ft_lstnew(0);
	t = ft_lstnew(0);
	if (!lst || !f || !del)
		return (NULL);
	if (t == NULL)
		return (NULL);
	t2 = t;
	while (lst->next != NULL)
	{
		t->content = f(lst->content);
		t->next = malloc(sizeof(t_list));
		if (t->next == NULL)
			ft_lstclear_last(lst, t, del);
		t = t->next;
		lst = lst->next;
	}
	return (t2);
}
