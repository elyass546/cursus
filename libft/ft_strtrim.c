/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:37:28 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/05 19:38:13 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_first(char const *s, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (set[j])
		{
			if (s[i] == set[j])
				break ;
			if (set[j + 1] == '\0')
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_end(char const *s, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s) - 1;
	while (s[i])
	{
		j = 0;
		while (set[j])
		{
			if (s[i] == set[j])
				break ;
			if (set[j + 1] == '\0')
				return (i);
			j++;
		}
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = ft_first(s1, set);
	j = ft_end(s1, set);
	k = j - i + 1;
	if (k < 0)
		k = 0;
	str = ft_substr(s1, i, k);
	return (str);
}
