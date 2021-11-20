/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:13:39 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/05 19:14:51 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s01;
	char	*s02;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if ((!dest || !src) && n == 0)
		return (dest);
	s01 = (char *)dest;
	s02 = (char *)src;
	while (i < n)
	{
		s01[i] = s02[i];
		i++;
	}
	return (dest);
}
