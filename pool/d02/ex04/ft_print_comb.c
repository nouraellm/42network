/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 15:05:47 by mochegri          #+#    #+#             */
/*   Updated: 2019/07/13 12:34:56 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '/';
	while (i++ <= '7')
	{
		j = i;
		while (j++ <= '8')
		{
			k = j;
			while (k++ <= '8')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (i < '7' || j < '8' || k < 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
