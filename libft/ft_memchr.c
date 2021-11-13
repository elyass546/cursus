/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:07:08 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/10 11:37:25 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;
	unsigned char		ch;

	ch = (unsigned char) c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ch == str[i])
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	// check(ft_memchr(s, 2 + 256, 3) == s + 2);
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	// char	c = NULL;
// 	char	*s1 = ft_memchr(s, 2 + 256, 3);
// 	char	*s2 = memchr(s, 2 + 256 , 3);
// 	printf("my   ------->  %s\n", s1);
// 	printf("they ------->  %s\n", s2);
// }
