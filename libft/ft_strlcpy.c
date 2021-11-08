/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:28:24 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/05 19:28:34 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	k;
	size_t	src_len;

	j = 0;
	src_len = ft_strlen(src);
	k = size - 1;
	if (size == 0)
		return (src_len);
	while ((src[j]) && (j < k))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (src_len);
}

/*int main()
{
	char	s1[] = "";
	char	s2[] = "";
	char	s3[] = "salam";
	char	s4[] = "salam";
	printf("%zu    %s\n", ft_strlcpy(s1, s3, 5), s1);
	printf("%lu    %s\n", strlcpy(s2, s4, 5), s2);
}*/