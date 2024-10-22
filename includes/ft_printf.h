/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcogne-- <mcogne--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:35:20 by mcogne--          #+#    #+#             */
/*   Updated: 2024/10/22 03:42:05 by mcogne--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_strlen(char *s);
char	*tab_hex(short uppercase);

int		ft_printf(const char *format, ...);

int		ft_putchar_len(int c);
int		ft_putstr_len(char *s);

int		ft_putnbr_len(int nb);
int		ft_putunbr_len(unsigned int nb);

int		ft_putunbr_len_hex(unsigned int n, short uppercase);

int		ft_putaddr(void *ptr);

#endif
