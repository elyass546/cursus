/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:35:41 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/05 19:36:02 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int ch)
{
	int	i;

	i = ft_strlen(str);
	if (!str)
		return (NULL);
	while (i > 0)
	{
		if (ch == str[i])
			return (&str[i]);
		i--;
	}
	if (ch == str[i])
		return (&str[i]);
	return (0);
}
