/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:54:08 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/13 18:52:34 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	int	i;

	i = 0;
	if (!del || !lst || !*lst)
		return ;
	while (lst[i])
	{
		del(lst[i]->content);
		free(lst[i]);
		lst[i] = lst[i]->next;
	}
}
