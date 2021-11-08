/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:13:39 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/05 19:14:51 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s01;
	char	*s02;
	size_t	i;

	if (src == dest || n == 0)
		return (dest);
	s01 = (char *)dest;
	s02 = (char *)src;
	i = 0;
	while (i < n)
	{
		s01[i] = s02[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main()
{
  char  dest1[] = "123456789";
  char  dest2[] = "123456789";
  char  src[] = "aa";
//   memcpy(NULL, NULL, 5);
  //ft_memcpy(dest2, src, 0);
//   printf("sd -------> %s\n", dest1);
//   printf("my -------> %s\n", dest2);
printf("%s\n", ft_memcpy(NULL, NULL, 5));
}*/
