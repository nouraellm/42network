/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 12:27:42 by mochegri          #+#    #+#             */
/*   Updated: 2019/07/17 00:58:11 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	if (nb < 0 || nb > 12)
		fact = 0;
	else if (nb == 0 || nb == 1)
		fact = 1;
	else
	{
		i = 1;
		fact = 1;
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
	}
	return (fact);
}
