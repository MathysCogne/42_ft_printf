/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_len_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:37:01 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/22 03:17:35 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_len_hex(unsigned int n, short uppercase)
{
	int		len;
	char	*base;

	if (!n)
		return (ft_putchar_len('0'));
	base = tab_hex(uppercase);
	len = 0;
	if (n >= 16)
		len += ft_putunbr_len_hex(n / 16, uppercase);
	len += write(1, &base[n % 16], 1);
	return (len);
}
