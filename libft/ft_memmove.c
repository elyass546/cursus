/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:40:02 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/10 11:41:11 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	char	*to;
	char	*from;
	size_t	i;

	to = (char *)dst;
	from = (char *)src;
	i = 0;
	if (to < from)
	{
		ft_memcpy(to, from, len);
	}
	else if (to > from)
	{	
		while (len > 0)
		{
			to[len - 1] = from[len -1];
			len --;
		}
	}
	return (to);
}
