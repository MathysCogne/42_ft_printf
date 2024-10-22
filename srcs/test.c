/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:32:51 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/22 17:47:24 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("=------ ARG -----=\n\n");
	printf("%s\n\n", argv[1]);
	printf("=--- FTPRINTF ---=\n\n");
	printf(" | Len: %d\n", ft_printf(argv[1], 42, 42));
	printf("\n=---- PRINTF ----=\n\n");
	printf(" | Len: %d\n\n", printf(argv[1], 42, 42));
	return (0);
}

/*int	main(int argc, char **argv)
{
	char			*s;
	char			c;
	int				i;
	int				d;
	unsigned int	u;
	unsigned int	x;
	unsigned int	X;
	unsigned int	*ptr;

	c = '0';
	s = "Couco";
	i = INT_MIN;
	d = INT_MAX;
	u = UINT_MAX;
	x = 42;
	X = 42;
	ptr = &x;
	if (argc != 2)
		return (1);
	printf("=------ ARG -----=\n\n");
	printf("%s\n\n", argv[1]);
	printf("=--- FTPRINTF ---=\n\n");
	printf(" | Len: %d\n", ft_printf(argv[1], s, c, i, d, u, x, X, (void *)ptr));
	printf("\n=---- PRINTF ----=\n\n");
	printf(" | Len: %d\n\n", printf(argv[1], s, c, i, d, u, x, X, (void *)ptr));
	return (0);
}*/