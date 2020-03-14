/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 06:09:11 by mochegri          #+#    #+#             */
/*   Updated: 2019/07/19 03:47:12 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*st;
	char	*t_f;

	i = 0;
	if (*str == '\0' || *to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			st = (str + i);
			t_f = to_find;
			while (t_f != '\0' && *st == *t_f)
			{
				t_f++;
				st++;
			}
			if (*t_f == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
