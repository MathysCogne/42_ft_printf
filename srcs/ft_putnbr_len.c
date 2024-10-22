/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:37:01 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/22 03:17:07 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_len(int n)
{
	long	nb;
	int		len;

	if (!n)
		return (ft_putchar_len('0'));
	len = 0;
	nb = n;
	if (nb < 0)
	{
		len += ft_putchar_len('-');
		nb = -nb;
	}
	if (nb >= 10)
		len += ft_putnbr_len(nb / 10);
	len += ft_putchar_len((nb % 10) + '0');
	return (len);
}

int	ft_putunbr_len(unsigned int n)
{
	long	nb;
	int		len;

	if (!n)
		return (ft_putchar_len('0'));
	len = 0;
	nb = n;
	if (nb < 0)
		nb = -nb;
	if (nb >= 10)
		len += ft_putnbr_len(nb / 10);
	len += ft_putchar_len((nb % 10) + '0');
	return (len);
}
