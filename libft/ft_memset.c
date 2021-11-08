/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:15:02 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/05 19:16:13 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, size_t value, size_t count)
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
