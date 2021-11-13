/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:24:58 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/10 11:45:22 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(s1);
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*sub;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	sub = (char *)ft_calloc((s1_len + s2_len + 1), sizeof(char));
	if (!sub)
		return (NULL);
	ft_strcat(sub, s1);
	ft_strcat(sub, s2);
	sub[s1_len + s2_len] = '\0';
	return (sub);
}
