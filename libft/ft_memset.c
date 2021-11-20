/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:15:02 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/17 13:36:27 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	unsigned char	*tp;

	tp = (unsigned char *)ptr;
	while (count > 0)
	{
		*tp = (unsigned char)value;
		tp++;
		count--;
	}
	return (ptr);
}
