/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:07:39 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/22 03:22:44 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*tab_hex(short uppercase)
{
	static char	tab[16];
	int			i;

	i = 0;
	while (i < 16)
	{
		if (i < 10)
			tab[i] = i + '0';
		else
		{
			if (uppercase == 'X')
				tab[i] = 'A' + (i - 10);
			else
				tab[i] = 'a' + (i - 10);
		}
		i++;
	}
	return (tab);
}
