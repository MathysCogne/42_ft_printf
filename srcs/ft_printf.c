/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:42:50 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/22 03:41:11 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*////////////////////////////////////////////
%c : single character					CHECK
%s : string								CHECK
%d : decimal			-> base 10		CHECK
%i : integer			-> base 10		CHECK
%u : unsigned decimal	-> base 10		CHECK
%x : number lowercase	-> base HEXA	CHECK
%X : number uppercase	-> base HEXA	CHECK
%p : pointer			-> base HEXA	CHECK
%% : percent sign						CHECK
////////////////////////////////////////////*/

static int	carac_format(const char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar_len(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr_len(va_arg(args, char *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr_len(va_arg(args, int)));
	if (c == 'u')
		return (ft_putunbr_len(va_arg(args, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_putunbr_len_hex(va_arg(args, unsigned int), c));
	if (c == 'p')
		return (ft_putaddr(va_arg(args, void *)));
	if (c == '%')
		return (ft_putchar_len('%'));
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
			len += ft_putchar_len(s[i]);
		i++;
	}
	va_end(args);
	return (len);
}
