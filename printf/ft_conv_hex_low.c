/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_hex_low.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:34:20 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/22 21:34:22 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conv_hex_low(unsigned int nbr)
{
	char	*hex;
	int		i;
	int		res_len;
	char	res[100];

	hex = "0123456789abcdef";
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
