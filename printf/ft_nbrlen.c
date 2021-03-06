/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 22:26:58 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/22 22:26:59 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(long nb)
{
	int	nbr_len;

	nbr_len = 1;
	if (nb < 0)
	{
		nb *= -1;
		nbr_len++;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		nbr_len++;
	}
	return (nbr_len);
}
