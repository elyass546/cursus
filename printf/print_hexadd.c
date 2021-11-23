/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexadd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 22:37:30 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/22 22:37:31 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conv_add(size_t nbr, char *hex)
{
	int		i;
	int		res_len;
	char	res[100];

	i = 0;
	if (nbr == 0)
	{
		ft_putchar('0');
		return (1);
	}
	while (nbr)
	{
		res[i++] = hex[nbr % 16];
		nbr = nbr / 16;
	}
	res[i] = '\0';
	res_len = ft_strlen(res) - 1;
	while (res_len >= 0)
		ft_putchar(res[res_len--]);
	return (ft_strlen(res));
}

int	print_hexadd(void *nbr)
{
	int		i;
	size_t	nb;
	char	*hex_base;

	hex_base = "0123456789abcdef";
	nb = (size_t)nbr;
	ft_putstr("0x");
	i = ft_conv_add(nb, hex_base) + 2;
	return (i);
}
