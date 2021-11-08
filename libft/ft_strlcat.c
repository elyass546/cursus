/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:26:45 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/05 19:28:07 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;
	size_t	a;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	a = len_dest;
	if (a >= size)
		return (len_src + size);
	while (src[i] && (len_dest < (size - 1)))
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (a + len_src);
}
