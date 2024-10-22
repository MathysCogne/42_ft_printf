/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlunbr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:37:01 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/22 16:45:47 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlunbr_base(unsigned int n, char *base)
{
	int				len;
	unsigned int	len_base;

	if (!n)
		return (ft_putlchar('0'));
	len_base = ft_strlen(base);
	len = 0;
	if (n >= len_base)
		len += ft_putlunbr_base(n / len_base, base);
	len += write(1, &base[n % len_base], 1);
	return (len);
}
