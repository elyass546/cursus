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

int	nbr_len(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*nbr_stock(char *sub, long n)
{
	long	nb;
	int		i;
	int		j;

	i = nbr_len(n) - 1;
	nb = (long)n;
	j = i + 1;
	if (nb < 0)
	{
		nb = -nb;
		sub[0] = '-';
	}
	while (nb > 9)
	{
		sub[i] = nb % 10 + 48;
		nb = nb / 10;
		i--;
	}
	sub[i] = nb + 48;
	sub[j] = '\0';
	return (sub);
}

char	*ft_itoa(int n)
{
	char	*sub;
	long	nbr;

	nbr = (long)n;
	sub = (char *)ft_calloc(sizeof(char), (nbr_len(nbr) + 1));
	if (!sub)
		return (NULL);
	nbr_stock(sub, nbr);
	return (sub);
}
