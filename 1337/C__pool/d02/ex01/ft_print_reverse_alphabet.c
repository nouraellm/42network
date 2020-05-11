/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 04:32:02 by mochegri          #+#    #+#             */
/*   Updated: 2019/07/13 11:50:48 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	chara_c;

	chara_c = 'z';
	while (chara_c >= 'a')
	{
		ft_putchar(chara_c);
		chara_c--;
	}
}
