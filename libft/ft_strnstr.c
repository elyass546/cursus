/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:33:54 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/05 19:34:39 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;
	size_t		j;
	char		*strs;
	char		*find;

	strs = (char *)str;
	find = (char *)to_find;
	i = 0;
	if (find[0] == '\0')
		return (strs);
	while (strs[i] && i < len)
	{
		j = 0;
		while (strs[i + j] == find[j])
		{
			if (find[j + 1] == '\0' && (i + j) < len)
				return (strs + i);
			j++;
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char *s1 = "MZIRIBMZIRIBMZE123";
// 	char *s2 = "MZIRIBMZE";
// 	size_t max = strlen(s1);
// 	char *i1 = strnstr(s1, s2, max);
// 	char *i2 = ft_strnstr(s1, s2, max);
// 	printf("they ----> %s\n", i1);
// 	printf("my   ----> %s\n", i2);
// 	if (strcmp(i1, i2) == 0)
// 		printf("1 \n");
// }