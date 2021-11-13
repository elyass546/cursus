/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:55:23 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/13 01:27:41 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	rest_nbr(const char *str, int sign, int i)
{
	long	res;
	long	num;

	res = 0;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = ((str[i] - '0') + (res * 10));
		if (sign == -1)
		{
			if ((num < 0) || (res < num))
				return (0);
		}
		if (sign == 1)
		{
			if ((num < 0) || (res < num))
				return (-1);
		}
		num = (str[i++] - '0') + (num * 10);
	}
	return (num * sign);
}

int	ft_atoi(const char	*str)
{
	long	i;
	long	num;
	int		sign;

	i = 0;
	sign = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	num = rest_nbr(str, sign, i);
	return (num);
}
