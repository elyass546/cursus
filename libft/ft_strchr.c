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

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	ch;
	unsigned char	s;

	s = (unsigned char)str;
	ch = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (ch == s[i])
			return (&s[i]);
		i++;
	}
	if (ch == s[i])
		return (&s[i]);
	return (0);
}
