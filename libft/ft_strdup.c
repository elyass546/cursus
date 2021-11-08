/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:20:36 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/05 19:20:48 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;
	int		j;

	i = ft_strlen(src);
	j = 0;
	c = (char *)malloc(sizeof(char) * (i + 1));
	if (!c)
		return (NULL);
	while (src[j] != '\0')
	{
		c[j] = src[j];
		j++;
	}
	c[j] = '\0';
	return (c);
}
