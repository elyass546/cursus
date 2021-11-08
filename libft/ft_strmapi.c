/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:30:36 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/05 19:32:11 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	salam(unsigned int i, char c)
{
	printf("%d  index %c\n" , i , c );
	return (c + 32);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			*sub;

	str = (char *)s;
	if (s == NULL || f == NULL)
		return (NULL);
	sub = (char *)ft_calloc(sizeof(char), (ft_strlen(s) + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (str[i])
	{
		sub[i] = (*f)(i, str[i]);
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

int main()
{
	char str[] = "ABCDE";
	printf("%s\n", ft_strmapi(str, salam));
}