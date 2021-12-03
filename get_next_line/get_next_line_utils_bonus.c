/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:09:21 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/30 16:09:23 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_substr(char *s, int start, int len)
{
	char	*p;
	int		i;
	int		lens;

	if (!s)
		return (0);
	lens = ft_strlen(s);
	if (start >= lens)
		return (ft_strdup(""));
	if (lens < start + len)
		len = lens;
	p = malloc(sizeof(char) * len + 1);
	if (!p)
		return (0);
	i = 0;
	while (s[start + i] && len > 0)
	{
		p[i] = s[start + i];
		i++;
		len--;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		j;

	i = ft_strlen(src);
	j = 0;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NOULL);
	while (src[j])
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	s1_len;
	size_t	i;
	char	*sub;

	i = 0;
	if (!s1 || !s2)
		return (NOULL);
	s1_len = ft_strlen(s1);
	sub = (char *)malloc((s1_len + ft_strlen(s2) + 1) * sizeof(char));
	if (!sub)
		return (NOULL);
	while (s1[i])
	{
		sub[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		sub[s1_len + i] = s2[i];
		i++;
	}
	sub[s1_len + ft_strlen(s2)] = '\0';
	return (sub);
}

char	*ft_strchr(char *haystack, int needle)
{
	int		i;

	i = 0;
	while (haystack[i])
	{
		if (needle == haystack[i])
			return (&haystack[i]);
		i++;
	}
	if (needle == haystack[i])
		return (&haystack[i]);
	return (NOULL);
}

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
