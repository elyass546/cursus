/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 22:30:41 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/22 22:30:43 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char	*param, ...)
{
	va_list		lst;
	int			x;
	int			count;
	int			len;

	va_start(lst, param);
	x = 0;
	len = 0;
	count = 0;
	while (param[len])
	{
		if (param[len] == '%')
		{
			x += check(param[len + 1], lst);
			len++;
		}
		else
		{
			ft_putchar(param[len]);
			count++;
		}
		len++;
	}
	va_end(lst);
	return (x + count);
}
