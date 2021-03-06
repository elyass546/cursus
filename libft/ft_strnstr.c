/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:33:54 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/05 19:34:39 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;
	size_t		j;
	char		*strs;
	char		*find;

	strs = (char *)str;
	find = (char *)to_find;
	i = 0;
	if (find[0] == '\0')
		return (strs);
	while (strs[i] && i < len)
	{
		j = 0;
		while (strs[i + j] == find[j])
		{
			if (find[j + 1] == '\0' && (i + j) < len)
				return (strs + i);
			j++;
		}
		i++;
	}
	return (0);
}
