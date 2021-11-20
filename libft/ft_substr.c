/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:38:32 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/13 18:46:15 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstock(char const *s, char *str, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	b;

	b = 0;
	i = 0;
	while (s[i])
	{
		if (i >= start && b < len)
		{
			str[b] = s[i];
			b++;
		}
		i++;
	}
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ptr;
	size_t	a;

	a = len + 1;
	if (!s)
		return (NULL);
	if (a > ft_strlen(s))
		a = ft_strlen(s) + 1;
	str = ft_calloc(sizeof(char), (a));
	if (!str)
		return (NULL);
	ptr = ft_strstock(s, str, start, len);
	return (ptr);
}
