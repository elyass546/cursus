/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_hex_upp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:36:52 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/22 21:36:55 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex_base(char *str)
{
	int	res_len;

	res_len = ft_strlen(str) - 1;
	while (res_len >= 0)
		ft_putchar(str[res_len--]);
}

int	ft_conv_hex_upp(unsigned int nbr)
{
	char	*base;
	long	n;
	int		i;
	char	result[100];

	base = "0123456789ABCDEF";
	i = 0;
	if (nbr == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (nbr > 0)
		n = (long int)nbr;
	else
		n = (unsigned int)nbr;
	while (n)
	{
		result[i++] = base[n % 16];
		n = n / 16;
	}
	result[i] = '\0';
	hex_base(result);
	return (ft_strlen(result));
}
