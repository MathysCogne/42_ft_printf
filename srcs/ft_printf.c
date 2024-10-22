/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:42:50 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/22 17:40:40 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	carac_format(const char c, va_list args)
{
	if (c == SINGLE_CHAR)
		return (ft_putlchar(va_arg(args, int)));
	if (c == STRING)
		return (ft_putlstr(va_arg(args, char *)));
	if (c == DECIMAL || c == INTEGER)
		return (ft_putlnbr(va_arg(args, int)));
	if (c == U_INTEGER)
		return (ft_putlunbr_base(va_arg(args, unsigned int), BASE_DEC));
	if (c == NB_HEX_LOWER)
		return (ft_putlunbr_base(va_arg(args, unsigned int), BASE_HEX));
	if (c == NB_HEX_UPP)
		return (ft_putlunbr_base(va_arg(args, unsigned int), BASE_HEX_UPP));
	if (c == POINTER)
		return (ft_putladdr_base(va_arg(args, void *), BASE_HEX));
	if (c == PERCENT_SIGN)
		return (ft_putlchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *s, ...)
{
	va_list		args;
	int			len;
	int			i;

	va_start(args, s);
	len = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			len += carac_format(s[i + 1], args);
			i++;
		}
		else
			len += ft_putlchar(s[i]);
		i++;
	}
	va_end(args);
	return (len);
}
