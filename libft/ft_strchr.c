/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:19:26 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/10 11:43:51 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *haystack, int needle)
{
	int		i;
	char	c;
	char	*str;

	i = 0;
	str = (char *)haystack;
	c = (char) needle;
	while (str[i])
	{
		if (c == str[i])
			return (&str[i]);
		i++;
	}
	if (c == str[i])
		return (&str[i]);
	return (0);
}
