/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:37:01 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/22 02:20:04 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putlstr(char *s)
{
	int	len;

	if (!s)
		s = "(null)";
	len = ft_strlen(s);
	return (write(1, s, len));
}
