/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:03:08 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/09 11:35:00 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*nbr_stock(int n, char *sub, int nbr_len)
{
	long int	nb;

	nb = n;
	if (n == 0)
		sub[0] = 48;
	if (n < 0)
	{
		sub[0] = '-';
		nb *= -1;
	}
	while (nbr_len >= 0 && nb > 0)
	{
		sub[nbr_len] = nb % 10 + 48;
		nb /= 10 ;
		nbr_len--;
	}
	return (sub);
}

char	*ft_itoa(int n)
{
	char	*sub;
	int		nbr_len;
	int		nb;

	nb = n;
	nbr_len = 0;
	if (nb < 0)
	{
		nb *= -1;
		nbr_len++;
	}
	if (nb == 0)
		nbr_len = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		nbr_len++;
	}
	sub = (char *)ft_calloc(sizeof(char), nbr_len + 1);
	if (!sub)
		return (NULL);
	nbr_len--;
	nbr_stock(n, sub, nbr_len);
	return (sub);
}
