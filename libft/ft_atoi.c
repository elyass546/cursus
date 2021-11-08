/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:55:23 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/05 18:55:25 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*str)
{
	long	i;
	int	res;
	int	s;

	i = 0;
	res = 0;
	s = 1;
	while ((str[i] == '\t') || (str[i] == '\r')
		|| (str[i] == ' ') || (str[i] == '\v')
		|| (str[i] == '\f') || (str[i] == '\n'))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			s = -s;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = ((str[i] - '0') + (res * 10));
		if ((str[i + 1] < '0') || (str[i + 1] > '9'))
			return (res * s);
		i++;
	}
	return (0);
}


// int main()
// {
// 	char n[40] = "99999999999999999999999999";
// 	int i1 = atoi(n);
// 	int i2 = ft_atoi(n);
// 	printf("they  ------->  %d\n", i1);
// 	printf("my    ------->  %d\n", i2);
// }