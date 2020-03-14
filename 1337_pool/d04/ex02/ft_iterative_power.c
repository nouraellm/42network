/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 01:04:46 by mochegri          #+#    #+#             */
/*   Updated: 2019/07/21 16:35:05 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int power_it;

	i = 0;
	power_it = 1;
	if (power == 0)
		return (1);
	else if (power > 0)
	{
		while (i < power)
		{
			power_it *= nb;
			i++;
		}
		return (power_it);
	}
	else
		return (0);
}
