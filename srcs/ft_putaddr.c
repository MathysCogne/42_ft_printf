/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:37:01 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/22 03:53:30 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_hex_len(int c, short uppercase)
{
	int		len;
	char	*base;

	if (!c)
		return (ft_putchar_len('0'));
	base = tab_hex(uppercase);
	len = 0;
	len += write(1, &base[c / 16], 1);
	len += write(1, &base[c % 16], 1);
	return (len);
}

int	ft_putaddr(void *ptr)
{
	unsigned long long		addr;
	int						len;
	char					*base;

	if (!ptr)
		return (ft_putstr_len("(nil)"));
	len = 0;
	addr = (unsigned long long)ptr;
	base = tab_hex(0);
	if (addr >= 16)
		len += ft_putaddr((void *)(addr / 16));
	if (len == 0)
		len += ft_putstr_len("0x");
	len += write(1, &base[addr % 16], 1);
	return (len);
}
