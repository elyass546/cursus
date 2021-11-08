/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:09:52 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/05 19:11:46 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s01;
	unsigned char	*s02;
	size_t	i;

	s01 = (unsigned char *)s1;
	s02 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s01[i] != s02[i])
			return (s01[i] - s02[i]);
		i++;
	}
	return (0);
}
 