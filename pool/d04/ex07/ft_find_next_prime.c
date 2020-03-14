/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 11:26:19 by mochegri          #+#    #+#             */
/*   Updated: 2019/07/17 11:38:41 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	else
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			else
				i++;
		}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb + 1;
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		while (ft_is_prime(i) != 1)
			i++;
	return (i);
}
