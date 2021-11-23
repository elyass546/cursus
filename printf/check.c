/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:32:49 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/22 21:32:55 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(char param, va_list lst)
{
	int	c;

	c = 0;
	if (param == '%')
		c = ft_putchar(param);
	else if (param == 'd' || param == 'i')
		c = ft_putnbr(va_arg(lst, int));
	else if (param == 'u')
		c = uns_nbr(va_arg(lst, unsigned int));
	else if (param == 's')
		c = ft_putstr(va_arg(lst, char *));
	else if (param == 'c')
		c = ft_putchar(va_arg(lst, int));
	else if (param == 'x')
		c = ft_conv_hex_low(va_arg(lst, unsigned int));
	else if (param == 'X')
		c = ft_conv_hex_upp(va_arg(lst, unsigned int));
	else if (param == 'p')
		c = print_hexadd(va_arg(lst, void *));
	return (c);
}
