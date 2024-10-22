/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putladdr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:37:01 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/22 16:39:23 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putladdr_base(void *ptr, char *base)
{
	unsigned long long		addr;
	int						len;

	if (!ptr)
		return (ft_putlstr("(nil)"));
	len = 0;
	addr = (unsigned long long)ptr;
	if (addr >= 16)
		len += ft_putladdr_base((void *)(addr / 16), base);
	if (len == 0)
		len += ft_putlstr("0x");
	len += write(1, &base[addr % 16], 1);
	return (len);
}
