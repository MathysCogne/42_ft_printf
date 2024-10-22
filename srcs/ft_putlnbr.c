/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:37:01 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/22 16:32:32 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlnbr(int n)
{
	long	nb;
	int		len;

	if (!n)
		return (ft_putlchar('0'));
	len = 0;
	nb = n;
	if (nb < 0)
	{
		len += ft_putlchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		len += ft_putlnbr(nb / 10);
	len += ft_putlchar((nb % 10) + '0');
	return (len);
}
