/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:55:34 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/10 11:43:00 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			j++;
			i--;
		}
		i++;
	}
	return (j);
}

char	*ft_strndup(const char *s, int n)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)ft_calloc(sizeof(char), (n + 1));
	if (!str)
		return (NULL);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_stock(char **str, char const *s, int size, char c)
{
	int	i;
	int	a;
	int	j;

	i = 0;
	a = 0;
	while (s[i] && a < (size + 1))
	{
		if (s[i] != c)
		{
			j = i;
			while (s[j] != c && s[j])
				j++;
			str[a] = ft_strndup(&s[i], (j - i));
			i = j - 1;
			a++;
		}
		i++;
	}
	str[a] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		b;
	char	**str;

	if (s == NULL)
		return (NULL);
	b = ft_count_words(s, c);
	str = ft_calloc(sizeof(char *), (b + 1));
	if (!str)
		return (NULL);
	str = ft_stock(str, s, b, c);
	return (str);
}
