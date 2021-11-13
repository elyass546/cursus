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

char	*ft_strrchr(char *str, int ch)
{
	int				i;
	unsigned char	c;

	c = (unsigned char)ch;
	i = ft_strlen(str);
	if (!str)
		return (NULL);
	while (i > 0)
	{
		if (c == str[i])
			return (&str[i]);
		i--;
	}
	if (c == str[i])
		return (&str[i]);
	return (0);
}
