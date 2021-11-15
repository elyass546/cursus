/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:35:41 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/10 11:50:18 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int				i;
	unsigned char	c;
	unsigned char	s;

	s = (unsigned char)str;
	c = (unsigned char)ch;
	i = ft_strlen(str);
	if (!s)
		return (NULL);
	while (i > 0)
	{
		if (c == s[i])
			return (&s[i]);
		i--;
	}
	if (c == s[i])
		return (&s[i]);
	return (0);
}
