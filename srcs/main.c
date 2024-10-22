/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:32:51 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/22 03:53:07 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

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

int	main(int argc, char **argv)
{
	// char	c1;
	// char	c2;
	// char	c3;

	// c1 = '2';
	// c2 = '1';
	// c3 = '0';

	if (argc != 2)
		return (1);
	printf("=------ ARG -----=\n\n");
	printf("%s\n\n", argv[1]);
	printf("=--- FTPRINTF ---=\n\n");
	printf(" | Len: %d\n", ft_printf(argv[1], 0, 0));
	printf("\n=---- PRINTF ----=\n\n");
	printf(" | Len: %d\n\n", printf(argv[1], 0, 0));
	return (0);
}
