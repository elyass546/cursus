/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:07:08 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/05 19:09:25 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (c == str[i])
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char	str[] = "";
// 	char	c = NULL;
// 	char	*s1 = ft_memchr(str, c, strlen(str));
// 	char	*s2 = memchr(str, c, strlen(str));
// 	printf("my   ------->  %s\n", s1);
// 	printf("they ------->  %s\n", s2);
// }