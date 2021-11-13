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

void	ft_lstclear(t_list	**lst, void	(*del)(void*))
{
	t_list	*nxt;
	while (lst)
	{
		nxt = lst->next;
		ft_lstdelone(lst, del);
		lst = next;
	}
}
/*
int   main()
{
	t_list *lst1 = ft_lstnew("salam");
	t_list *lst2 = 
	t_list *lst3
	ft_lstadd_front(&lst, ft_lstnew("56"));
    ft_lstadd_front(&lst, ft_lstnew("34"));
 	ft_lstadd_front(&lst, ft_lstnew("12"));	
}*/
