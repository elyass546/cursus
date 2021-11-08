/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:32:23 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/05 19:33:07 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*s01;
	unsigned char	*s02;

	s01 = (unsigned char *)s1;
	s02 = (unsigned char *)s2;
	i = 0;
	if (s01 == s02 || n == 0)
		return (0);
	while (s01[i] && s02[i] && i < n)
	{
		if (s01[i] != s02[i])
			return (s01[i] - s02[i]);
		i++;
	}
	if ((i < n) && ((s01[i] == '\0' && s02[i]) || (s01[i] && s02[i] == '\0')))
			return (s01[i] - s02[i]);
	return (0);
}
