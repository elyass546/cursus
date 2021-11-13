/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:21:23 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/13 01:25:41 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void    iter(unsigned int i, char * s)
// {
//     *s += 32;
//     printf("%d --> %c\n", i , *s);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s == 0)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// int    main()
// {
//     char s[] = "ABCD";
//     ft_striteri(s, iter);
// 	printf("%s\n", s);
//     return 0;
// }
